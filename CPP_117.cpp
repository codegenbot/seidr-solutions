#include <vector>
#include <string>
#include <iostream>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

std::vector<std::string> select_words(std::string s, int n) {
    std::vector<std::string> result;
    std::string word = "";
    int count = 0;

    for (char c : s) {
        if (c == ' ') {
            if (count == n) {
                result.push_back(word);
            }
            word = "";
            count = 0;
        } else {
            if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U') {
                count++;
            }
            word += c;
        }
    }

    if (count == n) {
        result.push_back(word);
    }

    return result;
}

int main() {
    // Test the select_words function
    std::vector<std::string> input = {"apple", "banana", "cherry"};
    std::vector<std::string> expected_output = {"pple", "bn", "chrry"};
    std::vector<std::string> result = select_words("apple banana cherry", 1);

    if (issame(result, expected_output)) {
        std::cout << "Test Passed" << std::endl;
    } else {
        std::cout << "Test Failed" << std::endl;
    }

    return 0;
}