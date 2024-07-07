```cpp
#include <vector>
#include <string>
#include <limits>

bool issame(const std::vector<std::vector<std::string>>& a, const std::vector<std::vector<std::string>>& b) {
    if (b.size() == 0) return true;
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

int total_match(const std::vector<std::vector<std::string>>& v) {
    int sum = 0;
    for (const auto& vec : v) {
        for (const auto& s : vec) {
            sum += s.size();
        }
    }
    return sum;
}

std::vector<std::string> v;

bool check(const std::vector<std::vector<std::string>>& a, const std::vector<std::vector<std::string>>& b) {
    if (!issame(a, b)) return false;
    int sum1 = total_match(a);  
    int sum2 = total_match(b);
    return (sum1 == sum2);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<std::vector<std::string>> vec1;
    std::vector<std::vector<std::string>> vec2;

    for (int i = 0; i < n; ++i) {
        int m;
        std::cin >> m;
        vec1.push_back(std::vector<std::string>());
        for (int j = 0; j < m; ++j) {
            std::string s;
            std::cin >> s;
            vec1.back().push_back(s);
        }
    }

    std::cin.ignore();
    int n2;
    std::cin >> n2;
    for (int i = 0; i < n2; ++i) {
        int m;
        std::cin >> m;
        vec2.push_back(std::vector<std::string>());
        for (int j = 0; j < m; ++j) {
            std::string s;
            std::cin >> s;
            vec2.back().push_back(s);
        }
    }

    if (!check(vec1, vec2)) {
        return 1;
    }

    return 0;
}