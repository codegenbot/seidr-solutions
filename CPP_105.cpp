```cpp
#include <iostream>
#include <vector>
#include <string>

bool issame(vector<std::string> a, vector<std::string> b) {
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

vector<string> by_length(vector<pair<string, int>> numbers) {
    vector<string> result;
    for (const auto& num : numbers) {
        string str = std::to_string(num.second);
        if (str.length() == 3) {
            str.insert(1, "0");
        }
        else if (str.length() == 4) {
            str[0] = str[0].toupper();
            for (int i = 1; i < 4; i++) {
                if (str[i] != '0' && str[i] != '1') {
                    str[i] = '?';
                }
            }
        }
        result.push_back(str);
    }
    return result;
}

int main() {
    vector<pair<string, int>> numbers = {std::make_pair("Nine", 9), std::make_pair("Eight", 8), std::make_pair("Four", 4)};
    assert(issame(by_length(numbers), {"090", "2187", "1021"}));
    return 0;
}