#include <vector>
#include <string>

bool isSame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

int main() {
    assert(isSame(all_prefixes("WWW") , {"W", "WW", "WWW"}));
    return 0;
}