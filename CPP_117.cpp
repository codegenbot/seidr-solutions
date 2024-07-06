```cpp
#include <iostream>
#include <vector>
#include <string>

bool isSame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (!is_same(a[i][0], b[i][0])) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<std::string> vec1, vec2;
    
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::string str;
        std::cout << "Enter element for vector 1: ";
        std::cin >> str;
        vec1.push_back(str);
        
        std::cout << "Enter element for vector 2: ";
        std::cin >> str;
        vec2.push_back(str);
    }
    
    bool is_same = isSame(vec1, vec2);
    
    if (is_same) {
        std::cout << "Vectors are same" << std::endl;
    } else {
        std::cout << "Vectors are not same" << std::endl;
    }

    return 0;
}