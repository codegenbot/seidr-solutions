```
#include <vector>
#include <string>
#include <algorithm>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (!a[i].compare(0, a[i].size(), b[i]) == 0) { 
            return false;
        }
    }
    return true;
}

std::vector<std::string> select_words(const std::string& s) {
    std::istringstream iss(s);
    std::string word;
    std::vector<std::string> words;
    
    while (iss >> word) {
        words.push_back(word);
    }
    return words;
}

int main() {
    std::string sentence = "The quick brown fox jumps over the lazy dog";
    std::vector<std::string> selected_words = select_words(sentence);

    if (!issame(selected_words, {"The", "fox", "the"})) {
        std::cout << "Test failed.\n";
    } else {
        std::cout << "Test passed.\n";
    }

    return 0;
}