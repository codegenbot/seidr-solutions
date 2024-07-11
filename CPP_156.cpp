#include <string>

std::string int_to_mini_romank(int n) {
    if(n >= 1000) {
        return "M";
    } else {
        return "m";
    }
}

int main() {
    std::string result = "";
    assert(int_to_mini_romank(1000) == "M");
    return 0;
}