#include <iostream>
#include <string>

std::string concatenate(std::vector<std::string> strings){
    std::string result = "";
    for(auto s : strings)
        result += s;
    return result;
}

int main() -> void {
    assert(concatenate({"x", "y", "z", "w", "k"}) == "xyzwk");
}