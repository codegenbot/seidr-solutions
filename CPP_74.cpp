```cpp
#include <vector>
#include <string>

bool same(const std::vector<std::vector<std::string>>& a, const std::vector<std::vector<std::string>>& b) {
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

int main() {
    int n;
    std::cin >> n;

    std::vector<std::vector<std::string>> vec1;
    std::vector<std::vector<std::string>> vec2(std::vector<std::vector<std::string>>({}));

    for (int i = 0; i < n; ++i) {
        int m;
        std::cin >> m;
        vec1.push_back({});
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
        vec2.push_back({});
        for (int j = 0; j < m; ++j) {
            std::string s;
            std::cin >> s;
            vec2.back().push_back(s);
        }
    }

    if (!same(vec1, vec2)) {
        return 1;
    }

    int sum1 = total_match(vec1);  
    int sum2 = total_match(vec2);

    if (sum1 != sum2) {
        return 1;
    }

    std::vector<std::string> v = {"this"};
    assert(same({{"this"}}, {}, {}));
    return 0;
}