#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <cassert>

bool issame(std::vector<std::string> vec1, std::vector<std::string> vec2) {
    if (vec1.size() != vec2.size()) {
        return false;
    }
    for (size_t i = 0; i < vec1.size(); ++i) {
        if (vec1[i] != vec2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(by_length({9, 4, 8}), {"Nine", "Eight", "Four"}));
}