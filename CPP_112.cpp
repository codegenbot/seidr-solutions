#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    std::string combined;
    for (const std::string& str : a) {
        combined += str;
    }
    for (const std::string& str : b) {
        combined += str;
    }

    std::string reversedResult(combined.rbegin(), combined.rend());

    return reversedResult == "euarT";
}

int main() {
    assert(issame({"mamma"}, {"mia"}));
    return 0;
}