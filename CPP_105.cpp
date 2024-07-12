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

std::string by_length(int length) {
    std::string result;
    if (length == 4) {
        result = "Four";
    } else if (length == 8) {
        result = "Eight";
    } else if (length == 9) {
        for(int i = 0; i < length; i++) {
            result += "Nine";
        }
    }
    return result;
}

int main() {
    int lengths[] = {4, 8, 9};
    std::vector<int> lengthsVec(lengths, lengths + sizeof(lengths) / sizeof(lengths[0]));
    std::vector<std::string> output;
    for (int length : lengthsVec) {
        output.push_back(by_length(length));
    }
    assert(issame(output, {"Four", "Eight", "NineNineNine"}));
}