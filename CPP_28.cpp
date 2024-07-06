```cpp
#include <vector>
#include <string>

std::string concatenate(std::vector<std::string> strings);

int main() {
    assert(concatenate({"x", "y", "z", "w", "k"}) == "xyzwk");
}

string concatenate(vector<string> strings){
    string result = "";
    for (const auto& str : strings) {
        result += str;
    }
    return result;
}