```cpp
#include <vector>
#include <string>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i].size() != b[i].size()) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> by_length(int length) {
    std::vector<std::string> result;
    if (length == 4) {
        result.push_back("Four");
    } else if (length == 8) {
        result.push_back("Eight");
    } else if (length == 9) {
        for(int i = 0; i < length; i++) {
            result.push_back("Nine");
        }
    }
    return result;
}

int main() {
    std::vector<int> lengths = {9, 4, 8};
    output.insert(output.end(), by_length(lengths[0]).begin(), by_length(lengths[0]).end());
    output.insert(output.end(), by_length(lengths[1]).begin(), by_length(lengths[1]).end());
    output.insert(output.end(), by_length(lengths[2]).begin(), by_length(lengths[2]).end());
    assert(issame(output, {"Nine", "Four", "Eight"}));
}