```cpp
#include <iostream>
#include <string>

int prod_signs(std::string s1, std::string s2, std::string s3) {
    int result = 1;
    if (s1 == "-1" || s2 == "-1" || s3 == "-1") return -1;
    if (s1 == "0" || s2 == "0" || s3 == "0") return 0;
    return 1;

}

int main() {
    std::cout << prod_signs("-1", "1", "1") << std::endl; 
}