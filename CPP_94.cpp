#include <iostream>
#include <vector>
#include <string>
#include <cassert>

int main() {
    int result = f({127, 97, 8192});
    assert(result == 10);
    return 0;
}

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