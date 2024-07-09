#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

int main() {
    assert(issame(all_prefixes("WWW"), {"W", "WW", "WWW"}));
    return 0;
}