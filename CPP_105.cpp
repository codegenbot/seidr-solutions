#include <vector>
#include <string>

bool isSame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
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

std::vector<std::string> byLength(int length) {
    std::vector<std::string> result;
    for (int i = 0; i < length; i++) {
        if (i == 4) {
            result.push_back("Four");
        } else if (i == 8) {
            result.push_back("Eight");
        } else if (i == 9) {
            std::vector<std::string> temp;
            for(int j = 0; j < i; j++) {
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
    assert(isSame(output, {"Nine", "Nine", "Nine", "Nine", "Nine", "Nine", "Nine", "Nine", "Nine"}));
}