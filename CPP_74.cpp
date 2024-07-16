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

std::vector<std::string> total_match(const std::vector<std::string>& lst1, const std::vector<std::string>& lst2) {
    if (total_chars(lst1) < total_chars(lst2)) {
        return lst1;
    }
    return (total_chars(lst1) == total_chars(lst2)) ? std::vector<std::string>() : lst2;
}

int main() {
    assert(issame(total_match({"this"}, {}), {}));
    return 0;
}