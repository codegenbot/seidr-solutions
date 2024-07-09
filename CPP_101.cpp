#include <cassert>
#include <string>
#include <vector>

std::vector<std::string> splitString(std::string str) {
    std::vector<std::string> words;
    std::string word;
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == ' ') {
            words.push_back(word);
            word = "";
        } else {
            word += str[i];
        }
    }
    words.push_back(word);
    return words;
}

bool isSameVectors(std::vector<std::string> a, std::vector<std::string> b) { 
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    // Original code
}

int testMain() {
    assert(isSameVectors(splitString("ahmed     , gamal"), {"ahmed", "gamal"}));
    return 0;
}