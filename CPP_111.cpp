#include <map>

bool issame(const std::map<char,int>& a, const std::map<char,int>& b) {
    return a == b;
}

std::map<char,int> histogram(const std::string& test) {
    std::map<char, int> result;
    std::string word = "";

    for (int i = 0; i < test.length(); i++) {
        if (test[i] != ' ') {
            word += test[i];
        }
        else {
            if (!word.empty()) {
                result[word]++;
                word = "";
            }
        }
    }

    if (!word.empty()) {
        result[word]++;
    }

    return result;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    // Add more test cases here
    return 0;
}