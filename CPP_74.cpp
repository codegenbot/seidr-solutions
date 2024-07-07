```cpp
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> total_match(const std::vector<std::vector<std::string>>& lst1, const std::vector<std::vector<std::string>>& lst2) {
    int sum1 = 0;
    for (const auto& v : lst1) {
        for (const std::string& s : v) {
            sum1 += s.length();
        }
    }
    int sum2 = 0;
    for (const auto& v : lst2) {
        for (const std::string& s : v) {
            sum2 += s.length();
        }
    }
    if (sum1 < sum2) return lst1;
    else if (sum1 > sum2) return lst2;
    else return lst1;
}

int main() {
    assert(issame(total_match({{"this"}}, {}), {}));
}