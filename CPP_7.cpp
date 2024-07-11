#include <vector>
#include <string>

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring);

bool isEqualTo(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

int main() {
    assert(isEqualTo(filter_by_substring({ "grunt", "trumpet", "prune", "gruesome" }, "run"), { "grunt", "prune" }));
    //...
}