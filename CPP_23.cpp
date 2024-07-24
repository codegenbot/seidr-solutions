#include <cstring>

int func_name(const std::string& str) {
    return str.length();
}

int main() {
    assert (strlen("asdasnakj") == 9);
}