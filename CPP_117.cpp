#include <cassert>
#include <vector>
#include <string>
#include <sstream>

bool isSame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

int main() {
    assert(isSame(select_words("a b c d e f", 1), {"b", "c", "d", "e"}));
    // rest of your code
}