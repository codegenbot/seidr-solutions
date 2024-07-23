```cpp
#include <iostream>
#include <vector>
#include <string>

std::string concatenate(std::vector<std::string> strings){
    std::string MyString = "";
    for(auto str : strings) {
        MyString += str;
    }
    return MyString;
}

int main() {
    assert(concatenate({"x", "y", "z", "w", "k"}) == "xyzwk");
    return 0;
}