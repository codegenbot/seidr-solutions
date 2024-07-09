#include <vector>
#include <algorithm>
#include <string>

bool isEqual(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i)
        if (a[i] != b[i]) return false;
    return true;
}

std::vector<std::string> by_length(std::vector<int> arr) {
    std::vector<std::string> result;
    for (int i : arr) {
        if (i >= 1 && i <= 9)
            result.push_back(to_string(i));
    }
    std::sort(result.begin(), result.end());
    std::reverse(result.begin(), result.end());
    for (std::string& s : result) {
        switch (stoi(s)) {
            case 1: s = "One"; break;
            case 2: s = "Two"; break;
            case 3: s = "Three"; break;
            case 4: s = "Four"; break;
            case 5: s = "Five"; break;
            case 6: s = "Six"; break;
            case 7: s = "Seven"; break;
            case 8: s = "Eight"; break;
            case 9: s = "Nine"; break;
        }
    }
    return result;
}

int main() {
    assert(isEqual(by_length({9, 4, 8}), {"Nine", "Eight", "Four"}));
}