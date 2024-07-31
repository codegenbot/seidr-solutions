#include <string>
#include <cassert>

std::string string_xor(const std::string& a, const std::string& b) {
    std::string result = "";
    for(size_t i=0; i < a.size(); i++){
        result += (a[i] == b[i] ? '0' : '1');
    }
    return result;
}

int main() {
    assert(string_xor("0101", "0000") == "0101");

    return 0;
}