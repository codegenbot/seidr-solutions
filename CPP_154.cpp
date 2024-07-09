```cpp
#include <iostream>
#include <string>

bool cycpattern_check(std::string a, std::string b) {
    for(int i = 0; i < a.length(); i++) {
        std::string temp = a.substr(i);
        if(temp.length() >= b.length()) {
            bool flag = true;
            for(int j = 0; j < b.length(); j++) {
                if(temp.find(b[j]) == -1) {
                    flag = false;
                    break;
                }
                temp = temp.substr(1) + temp[0];
            }
            if(flag) return true;
        }
    }
    return false;
}

int main() {
    std::string a, b;
    std::cout << "Enter the first string: ";
    std::cin >> a;
    std::cout << "Enter the second string: ";
    std::cin >> b;
    
    if(cycpattern_check(a, b)) {
        std::cout << "Cyclic pattern found." << std::endl;
    } else {
        std::cout << "No cyclic pattern found." << std::endl;
    }
    
    return 0;
}