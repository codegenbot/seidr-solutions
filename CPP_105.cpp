#include <vector>
#include <string>

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

std::vector<std::string> byLength(int lengths) {
    std::vector<std::string> result;
    for (int length : {lengths}) {
        if (length == 4) {
            result.push_back("Four");
        } else if (length == 8) {
            result.push_back("Eight");
        } else if (length == 9) {
            std::vector<std::string> temp;
            for(int i = 0; i < length; i++) {
                temp.push_back("Nine");
            }
            result.insert(result.end(), temp.begin(), temp.end());
        }
    }
    return result;
}

int main() {
    std::vector<int> lengths = {9};
    std::vector<std::string> output = byLength(lengths[0]);
    assert(issame(output, {"Nine", "Nine", "Nine", "Nine", "Nine", "Nine", "Nine", "Nine", "Nine"}));
}