#include <map>

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

bool issame(const std::map<char,int>& a, const std::map<char,int>& b) {
    return a == b;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    // Add more test cases here
    return 0;
}