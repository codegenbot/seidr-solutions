#include <vector>
#include <cassert>

size_t total_chars(const std::vector<std::string>& lst) {
    size_t total = 0;
    for (const std::string& str : lst) {
        total += str.size();
    }
    return total;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> total_match(const std::vector<std::string>& lst1, const std::vector<std::string>& lst2);

int main() {
    assert(issame(total_match({"this"}, {}), {}));
    return 0;
}