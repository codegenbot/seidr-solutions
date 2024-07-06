```cpp
#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> select_words(int n) {
    std::vector<std::string> result;
    for (int i = 0; i < n; i++) {
        std::string word;
        std::cin >> word;
        result.push_back(word);
    }
    return result;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (!a[i].compare(0,1,b[i],0,1)) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<std::string> a = select_words(n);
    std::vector<std::string> b = select_words(n);
    bool result = issame(a, b);
    if (result) {
        std::cout << "The two lists are the same." << std::endl;
    } else {
        std::cout << "The two lists are different." << std::endl;
    }
    return 0;
}