```
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return (a == b);
}

int main() {
    std::vector<std::string> total_match(std::vector<std::string> lst1, std::vector<std::string> lst2) {
        int sum1 = 0;
        for (const auto& str : lst1) {
            sum1 += str.length();
        }
        int sum2 = 0;
        for (const auto& str : lst2) {
            sum2 += str.length();
        }
        if (sum1 < sum2) return lst1;
        else if (sum1 > sum2) return lst2;
        else return lst1;
    }

    assert(issame(total_match({"this"}, {}), {}));
    return 0;
}