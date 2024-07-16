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
    std::vector<int> v(3); // Initialize the vector with size 3 and all elements set to 0.
    v[0] = 127;
    v[1] = 97;
    v[2] = 8192;
    std::cout << f(v) << std::endl;
    return 0;
}