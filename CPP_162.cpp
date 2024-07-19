
#include <iostream>
#include <string>
#include <cassert>
#include <functional>

std::string string_to_md5(const std::string& text) {
    if (text.empty()) {
        return "None";
    }

    std::hash<std::string> hash_fn;
    std::size_t hash = hash_fn(text);

    std::stringstream ss;
    ss << std::hex << hash;

    return ss.str();
}

int main() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");
    
    return 0;
}