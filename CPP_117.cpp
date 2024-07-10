#include <vector>
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

std::vector<std::string> select_words(std::string s, int n);

int main() {
    // Test cases
    std::vector<std::string> input1 = {"Hello", "World"};
    std::vector<std::string> input2 = {"Good", "Morning"};

    std::vector<std::string> output1 = select_words("Hello World", 2);
    std::vector<std::string> output2 = select_words("Good Morning", 1);

    assert(issame(output1, input1));
    assert(issame(output2, input2));

    return 0;
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