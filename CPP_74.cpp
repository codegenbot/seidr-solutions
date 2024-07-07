#include <vector>
#include <string>

bool issame(const std::vector<std::vector<std::string>>& a, const std::vector<std::vector<std::string>>& b) {
    if (b.size() == 0) return true;
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

int total_match(const std::vector<std::vector<std::string>>& v1, const std::vector<std::vector<std::string>>& v2) {
    int sum = 0;
    for (const auto& vec : v1) {
        for (const auto& s : vec) {
            sum += s.size();
        }
    }
    return sum;
}

int main() {
    int sum1 = total_match({{"this"}}, {});
    
    assert(issame(std::vector<std::vector<std::string>>{{"this"}}, {} ));

    return 0;
}