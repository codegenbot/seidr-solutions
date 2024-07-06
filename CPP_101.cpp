```cpp
#include <vector>
#include <string>

typedef std::basic_string<char> my_string;

bool issame(std::vector<my_string> a, std::vector<my_string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> words_string(std::string s) {
    std::vector<std::string> result;
    std::string word = "";
    for (char c : s) {
        if (c == ' ' || c == ',') {
            if (!word.empty()) {
                result.push_back(word);
                word = "";
            }
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        result.push_back(word);
    }
    return result;
}

int main() {
    std::string s;
    // Input the string
    std::cout << "Enter a string: ";
    std::getline(std::cin, s);

    // Split the string and check for sameness with input string
    auto words = words_string(s);
    bool is_same = issame({s}, words);

    if (is_same) {
        std::cout << "The string and its words are same." << std::endl;
    } else {
        std::cout << "The string and its words are not the same." << std::endl;
    }

    return 0;
}