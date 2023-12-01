#include <string>
#include <algorithm>
#include <cassert>

std::string compare_one(std::string str_a, std::string str_b) {
    std::replace(str_a.begin(), str_a.end(), ',', '.');
    std::replace(str_b.begin(), str_b.end(), ',', '.');

    return (str_a > str_b) ? str_a : str_b;
}

int main() {
    assert(compare_one("1", "1") == "None");
    return 0;
}