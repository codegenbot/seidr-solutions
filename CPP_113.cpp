```cpp
#include <iostream>
#include <vector>
#include <string>

bool issame(std::vector<std::string>, std::vector<std::string>);

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> odd_count(std::vector<std::string> lst) {
    std::vector<std::string> result;
    for (int i = 0; i < lst.size(); i++) {
        int count = 0;
        for (char c : lst[i]) {
            if ((c - '0') % 2 != 0) { 
                count++;
            }
        }
        result.push_back(std::to_string(count) + " is the number of odd elements in string " + std::to_string(i+1));
    }
    return result;
}

int main() {
    std::vector<std::string> test = {"271", "137", "314"};
    if (issame(odd_count(test), {"2 is the number of odd elements in string 1",
                                 "1 is the number of odd elements in string 2",
                                 "0 is the number of odd elements in string 3"})) {
        std::cout << "Test passed.\n";
    } else {
        std::cout << "Test failed.\n";
    }
    return 0;
}