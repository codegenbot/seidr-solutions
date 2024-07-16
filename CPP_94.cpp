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

std::string output = f({127, 97, 128});
assert(output == "011110100001");
return 0;