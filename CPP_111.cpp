#include <map>

bool issame(const std::map<char, int>& a, const std::map<char, int>& b) {
    return a == b;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    
    return 0;
}