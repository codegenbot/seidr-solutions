```cpp
#include <iostream>
#include <cassert>

int digitSum(const std::string& s) {
    std::string new_str = "";
    for (char c : s) {
        if (isdigit(c)) {
            new_str += c;  
        }
    }
    int sum = 0;
    for (char c : new_str) {
        sum += (c - '0');  
    }
    return sum;

}

int main() {
    assert(digitSum("You arE Very Smart") == 14);
    std::cout << "digitSum: " << digitSum("You arE Very Smart") << std::endl;
    return 0;
}