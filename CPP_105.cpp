#include <vector>
#include <string>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    std::vector<std::string> sorted_a = a;
    std::sort(sorted_a.begin(), sorted_a.end());
    std::vector<std::string> sorted_b = b;
    std::sort(sorted_b.begin(), sorted_b.end());
    return sorted_a == sorted_b;
}

int main() {
    assert(issame({"Nine", "Four", "Eight"}, {"Nine", "Eight", "Four"}));
    return 0;
}