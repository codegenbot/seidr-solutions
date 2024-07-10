#include <cassert>
#include <string>

std::string compare_one(std::string str, int num) {
    if (num == 1) {
        return "None";
    }
    return "";
}

int main() {
    assert(compare_one("1", 1) == "None");
    return 0;
}