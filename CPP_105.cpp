```cpp
#include <vector>
#include <string>

bool isSame(vector<string> a, vector<string> b) {
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++)
        if(a[i] != b[i])
            return false;
    return true;
}

int by_length_helper(std::vector<std::pair<string, int>> result) {
    std::sort(result.begin(), result.end(), [](const auto& a, const auto& b){return a.first.length() < b.first.length();});
    int max_length = 0;
    for(const auto& pair : result)
        max_length = std::max(max_length, pair.first.length());
    return max_length;
}

int main() {
    assert(isSame(by_length({9, 4, 8}), {"Nine", "Eight", "Four"}));
    return 0;
}