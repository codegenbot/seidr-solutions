```cpp
#include <iostream>
#include <vector>

int main() {
    int result = f({127, 97, 8192});
    assert(result == 10);
    return 0;
}

int f(std::vector<int> v) {
    std::string str;
    for (int i : v) {
        if (i >= 128)
            str += '*'; 
        else
            str += static_cast<char>(i); 
    }
    return str.length(); 
}