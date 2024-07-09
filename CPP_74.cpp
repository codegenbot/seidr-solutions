```cpp
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> total_match(std::vector<std::string> lst1, std::vector<std::string> lst2) {
    int sum1 = 0, sum2 = 0;
    for (const std::string& s : lst1) sum1 += s.size();
    for (const std::string& s : lst2) sum2 += s.size();

    if (sum1 < sum2)
        return lst1;
    else if (sum1 > sum2)
        return lst2;
    else
        return (issame(lst1, lst2)?lst1:total_match(total_match({}, lst2), {}));
}

int main() {
    std::vector<std::string> lst1 = {"this"}, lst2 = {};
    if (issame(lst1, lst2)) {
        assert(issame(total_match(lst1, lst2), {}));
    }
    return 0;
}