```cpp
#include <iostream>
#include <vector>
#include <string>

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

int main() {
    std::vector<int> v; // Initialize the vector without specifying a size.
    v.resize(3);
    v[0] = 127;
    v[1] = 97;
    v[2] = 8192;
    std::cout << f(v) << std::endl;
    return 0;
}