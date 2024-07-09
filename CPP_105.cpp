```cpp
#include <vector>
#include <algorithm>
#include <string>

bool same(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> by_length(std::vector<int> arr) {
    std::vector<std::string> result;
    for (int num : arr) {
        if (num >= 1 && num <= 9)
            result.push_back(to_string(num));
    }
    sort(result.begin(), result.end());
    reverse(result.begin(), result.end());
    std::vector<std::string> res;
    for (std::string s : result) {
        switch (stoi(s)) {
            case 1: res.push_back("One"); break;
            case 2: res.push_back("Two"); break;
            case 3: res.push_back("Three"); break;
            case 4: res.push_back("Four"); break;
            case 5: res.push_back("Five"); break;
            case 6: res.push_back("Six"); break;
            case 7: res.push_back("Seven"); break;
            case 8: res.push_back("Eight"); break;
            case 9: res.push_back("Nine"); break;
        }
    }
    return res;
}

int main() {
    assert(same(by_length({9, 4, 8}) , {"Nine", "Eight", "Four"}));
}