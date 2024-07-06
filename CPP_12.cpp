#include <vector>
#include <algorithm>
#include <string>

std::string longest(const std::vector<std::string>& strings) {
    return *std::max_element(strings.begin(), strings.end(),
        [](const auto& s1, const auto& s2) { return s1.length() < s2.length(); });
}

int main() {
    int n;
    cin >> n;
    std::vector<std::string> strings(n);
    for (auto& str : strings) {
        cin >> str;
    }
    cout << longest(strings) << endl;
    return 0;
}