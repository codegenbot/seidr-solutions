#include <vector>
#include <string>

bool issame(const std::vector<std::vector<std::string>>& a, const std::vector<std::vector<std::string>>& b) {
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

std::vector<std::string> by_length(const std::initializer_list<int>& lengths) {
    std::vector<std::string> result;
    for(int length : lengths) {
        if (length == 4) {
            result.push_back("Four");
        } else if (length == 8) {
            result.push_back("Eight");
        } else if (length == 9) {
            for(int i = 0; i < length; i++) {
                result.push_back("Nine");
            }
        }
    }
    std::vector<std::vector<std::string>> output;
    for(int i = 0; i < lengths.size(); i++) {
        if (i == 0) {
            output.push_back({result[i]});
        } else {
            output.push_back({result[i-1], result[i]});
        }
    }
    return output;
}

int main() {
    assert(issame(by_length({9, 4, 8}), by_length({9, 4, 8})));
}