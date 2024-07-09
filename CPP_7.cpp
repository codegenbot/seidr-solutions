Here's the modified code:
```cpp
#include <vector>
#include <string>
#include <cstdint>

bool operator==(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> filter_by_substring(const std::vector<std::string>& strings, const std::string& substring) {
    std::vector<std::string> output_vector;
    for (const auto& s : strings) {
        if (s.find(substring) != std::string::npos)
            output_vector.push_back(s);
    }
    return output_vector;
}

int main() {
    int n, m;
    std::cin >> n >> m;

    std::vector<std::string> strings(n);
    for (int i = 0; i < n; ++i) {
        strings[i].resize(m);
        for (int j = 0; j < m; ++j)
            std::cin >> strings[i][j];
    }

    std::string substring;
    std::cin >> substring;

    std::vector<std::string> output_vector = filter_by_substring(strings, substring);

    // Print the result
    for (const auto& s : output_vector) {
        for (char c : s)
            std::cout << c << ' ';
        std::cout << '\n';
    }

    return 0;
}