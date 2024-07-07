#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    if (sum1 < sum2) {
        vector<string> result;
        for (const auto& v : lst1) {
            for (const string& s : v) {
                result.push_back(s);
            }
        }
        return 0;
    } else if (sum1 > sum2) {
        vector<string> result;
        for (const auto& v : lst2) {
            for (const string& s : v) {
                result.push_back(s);
            }
        }
        return 0;
    } else {
        vector<string> result;
        for (const auto& v : lst1) {
            for (const string& s : v) {
                result.push_back(s);
            }
        }
        return 0;
    }
}