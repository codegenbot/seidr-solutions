```cpp
#include <vector>
#include <string>

bool issame(std::vector<std::string>, std::vector<std::string>) {
    std::vector<std::string> total_match(const std::vector<std::string>& lst1, const std::vector<std::string>& lst2) {
        int sum1 = 0, sum2 = 0;
        for (const auto& s : lst1) {
            sum1 += s.length();
        }
        for (const auto& s : lst2) {
            sum2 += s.length();
        }
        if (sum1 < sum2) return lst1;
        else if (sum1 > sum2) return lst2;
        else return lst1;
    }
}