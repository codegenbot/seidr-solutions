#include <vector>
#include <cassert>
#include <string>
bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a.size() == b.size();
}
int main() {
    std::vector<std::string> bf{"Jupiter", "Makemake"};
    assert(issame(bf, std::vector<std::string>{}));
    return 0;
}