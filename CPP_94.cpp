```cpp
#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::string f(std::vector<int> v) {
    std::string s = "";
    for (int i : v) {
        if (i >= 128)
            s += "1";
        else
            s += (char)(i); 
    }
    return s;
}

std::string output = f({127, 97, 8192});
assert(output == "011110100000101");
int main() {
    std::vector<int> v(3);
    v.push_back(127);
    v.push_back(97);
    v.push_back(8192);
    std::cout << f(v) << std::endl;
    return 0;
}