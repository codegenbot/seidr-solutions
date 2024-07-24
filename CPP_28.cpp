#include <vector>
#include <string>
#include <cassert>

std::string concatenate(std::vector<std::string> strings) {
    std::string result = "";
    for (const auto& str : strings) {
        result += str;
    }
    return result;
}

int main() {
    vector<string> words = {"Hello", " ", "world!"};
    assert(concatenate(words) == "Hello world!");
    return 0;
}