```cpp
#include <vector>
#include <string>

bool issame(std::vector<std::string> a) {
    if (a.size() == 0) return true;
    for (int i = 1; i < a.size(); i++) {
        if (a[i] != a[0]) return false;
    }
    return true;
}

std::vector<std::string> total_match(std::vector<std::string> lst1, std::vector<std::string> lst2) {
    int sum1 = 0;
    for (const std::string& s : lst1) {
        sum1 += s.size();
    }
    int sum2 = 0;
    for (const std::string& s : lst2) {
        sum2 += s.size();
    }
    if (sum1 < sum2) return lst1;
    else if (sum1 > sum2) return lst2;
    else return lst1;
}

int main() {
    assert(issame(total_match({"this"}, {})));
    return 0;
}