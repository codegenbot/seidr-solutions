#include <vector>
#include <string>

bool issame(std::vector<std::string> a) {
    std::vector<std::string> b;
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> input) {
    std::sort(input.begin(), input.end());
    for (int i = 0; i < input.size(); i++) {
        if (input[i].size() > 1) {
            char firstChar = input[i][0];
            for (int j = i + 1; j < input.size(); j++) {
                if (input[j][0] == firstChar) {
                    input.erase(input.begin() + j);
                    j--;
                }
            }
        }
    }
    return input;
}

int main() {
    std::vector<std::string> b = {"cc", "dd", "aaaa", "bbbb"};
    return !issame(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), b);
}