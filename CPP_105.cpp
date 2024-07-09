```cpp
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::vector<std::string>> by_length(const std::vector<int>& arr) {
    std::vector<int> num;
    for (int i : arr) {
        if (i >= 1 && i <= 9) {
            num.push_back(i);
        }
    }

    sort(num.begin(), num.end());
    reverse(num.begin(), num.end());

    std::vector<std::vector<std::string>> result;
    for (int n : num) {
        switch (n) {
            case 1:
                result.push_back({"One"});
                break;
            case 2:
                result.push_back({"Two"});
                break;
            case 3:
                result.push_back({"Three"});
                break;
            case 4:
                result.push_back({"Four"});
                break;
            case 5:
                result.push_back({"Five"});
                break;
            case 6:
                result.push_back({"Six"});
                break;
            case 7:
                result.push_back({"Seven"});
                break;
            case 8:
                result.push_back({"Eight"});
                break;
            case 9:
                result.push_back({"Nine"});
                break;
        }
    }

    return result;
}

int main() {
    assert(issame(by_length({9, 4, 8}), {{"Nine"}, {"Four"}, {"Eight"}}));
    return 0;
}