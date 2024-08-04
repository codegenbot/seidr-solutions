#include <vector>
#include <string>
#include <cassert>
#include <iostream>

std::vector<std::string> split_words(const std::string& txt);
bool assert_equal(const std::vector<std::string>& a, const std::vector<std::string>& b);

bool assert_equal(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> split_words(const std::string& txt) {
    std::vector<std::string> result;
    std::string word = "";

    for (char c : txt) {
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

    if (result.size() == 1 && std::all_of(result[0].begin(), result[0].end(), ::islower)) {
        int count = 0;

        for (char c : result[0]) {
            if ((c - 'a') % 2 == 1) {
                count++;
            }
        }

        result[0] = std::to_string(count);
    }

    return result;
}

int main() {
    assert_equal(split_words(""), std::vector<std::string>{"0"});

    return 0;
}