#include <string>
#include <vector>
#include <algorithm>

std::string longest(const std::vector<std::string>& strings) {
    return *std::max_element(strings.begin(), strings.end(),
        [](const auto& a, const auto& b){return a.length() < b.length();})->c_str();
}

int main() {
    int n;
    std::cin >> n;
    std::vector<std::string> strings(n);
    for(int i = 0; i < n; i++) {
        std::cin >> strings[i];
    }
    std::cout << longest(strings) << std::endl;
    return 0;
}