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

std::string byLength(int length) {
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
    int lengths[] = {9};
    std::vector<std::string> output;
    for (int length : lengths) {
        output.push_back(byLength(length));
    }
    assert(issame(output, {"Nine", "Nine", "Nine", "Nine", "Nine", "Nine", "Nine", "Nine", "Nine"}));
}