#include <algorithm>
#include <string>
#include <cassert>
#include <cstring>

std::string remove_vowels(const std::string& text) {
    std::string result = text;
    result.erase(std::remove_if(result.begin(), result.end(), [](char c) { return strchr("aeiouAEIOU", c) != nullptr; }), result.end());
    return result;
}

int main() {
    assert(remove_vowels("ybcd") == "ybcd");

    return 0;
}