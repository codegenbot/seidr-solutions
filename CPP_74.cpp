```cpp
#include <vector>
#include <string>

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

int main() {
    std::vector<std::vector<std::string>> a{{"this"}};
    std::vector<std::vector<std::string>> b={};

    int sum1 = total_match(a);
    int sum2 = total_match(b);

    assert(issame(a, b));

    return 0;
}