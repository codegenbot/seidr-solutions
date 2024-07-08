```
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main(int argc, char** argv) {
    std::vector<std::string> total_match(const std::vector<std::string>& vec1, const std::vector<std::string>& vec2) {
        int sum1 = 0;
        for (const auto& str : vec1) {
            sum1 += str.length();
        }
        int sum2 = 0;
        for (const auto& str : vec2) {
            sum2 += str.length();
        }
        if (sum1 < sum2) return vec1;
        else if (sum1 > sum2) return vec2;
        else return vec1;
    }

    assert(issame(total_match({"this"}, {}), {}));
    return 0;
}