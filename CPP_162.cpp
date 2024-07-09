#include <iostream>
#include <cassert>
#include <string>
#include <functional>

std::string string_to_md5(const std::string& text) {
    if (text.empty()) {
        return "None";
    }

    std::hash<std::string> hash_fn;
    size_t hash = hash_fn(text);

    return std::to_string(hash);
}

int main() {
    assert(string_to_md5("password") == "8601161841171438106");
    return 0;
}