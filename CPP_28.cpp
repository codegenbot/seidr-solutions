#include <vector>
#include <string>
#include <cassert>

std::string concatenate(std::vector<std::string> strings){
    std::string result = "";
    for (const auto& str : strings) {
        result += str;
    }
    return result;
}

int main() {
    assert(concatenate({"hello", "world"}) == "helloworld");
    return 0;
}