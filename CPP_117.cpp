#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
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

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    int consonantCount = 0;

    for (char c : s) {
        if (c != ' ') {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                if (!word.empty()) {
                    if (consonantCount == n) {
                        result.push_back(word);
                    }
                    word = "";
                    consonantCount = 0;
                }
            } else {
                word += c;
                consonantCount++;
            }
        } else {
            if (!word.empty() && consonantCount == n) {
                result.push_back(word);
            }
            word = "";
            consonantCount = 0;
        }
    }

    if (!word.empty() && consonantCount == n) {
        result.push_back(word);
    }

    return result;
}

int main() {
    string s = "hello world";
    int n = 2;

    vector<string> result = select_words(s, n);
    vector<string> expected = {"hello"};

    if (issame(result, expected)) {
        std::cout << "Test passed!" << std::endl;
    } else {
        std::cout << "Test failed!" << std::endl;
    }

    return 0;
}