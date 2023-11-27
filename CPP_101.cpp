#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> words_string(const std::string& s) {
    std::vector<std::string> words;
    std::string word = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ' || s[i] == ',') {
            if (word != "") {
                words.push_back(word);
                word = "";
            }
        } else {
            word += s[i];
        }
    }
    if (word != "") {
        words.push_back(word);
    }
    return words;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    bool result = true;
    if (a.size() != b.size()) {
        result = false;
    } else {
        for (int i = 0; i < a.size(); i++) {
            if (a[i] != b[i]) {
                result = false;
                break;
            }
        }
    }
    return result;
}

int main() {
    assert(issame(words_string("ahmed     , gamal"), {"ahmed", "gamal"}));

    // Additional test cases
    assert(issame(words_string(""), {}));  // Empty string, expect empty vector
    assert(issame(words_string("apple,orange,banana"), {"apple", "orange", "banana"}));  // Multiple words separated by commas
    assert(issame(words_string("   hello, world   ,   how , are , you   "), {"hello", "world", "how", "are", "you"}));  // Extra spaces before and after words

    return 0;
}