#include <string>
#include <vector>

std::vector<std::string> split_words(std::string txt) {
    std::vector<std::string> words;
    std::string word = "";
    bool hasWhitespace = false;
    bool hasComma = false;

    for (int i = 0; i < txt.length(); i++) {
        if (txt[i] == ' ') {
            hasWhitespace = true;
            if (word != "") {
                words.push_back(word);
                word = "";
            }
        }
        else if (txt[i] == ',') {
            hasComma = true;
            if (word != "") {
                words.push_back(word);
                word = "";
            }
        }
        else {
            word += txt[i];
        }
    }

    if (word != "") {
        words.push_back(word);
    }

    if (words.empty()) {
        words.push_back(std::to_string(3));
    }

    return words;
}

int main() {
    std::vector<std::string> result = split_words("Hello, world");
    return 0;
}