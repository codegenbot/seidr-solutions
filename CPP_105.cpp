#include <algorithm>
#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> by_length(std::vector<int> arr) {
    // Implement the by_length function here

    return {}; // return an empty vector for now
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert (issame(by_length({9, 4, 8}) , {"Nine", "Eight", "Four"}));

    return 0;
}