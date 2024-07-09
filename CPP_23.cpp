#include <cassert>
#include <string>

int my_str_length(const std::string& str) {
    return str.length();
}

int main() {
    assert(my_str_length("asdasnakj") == 12); 
    return 0;
}