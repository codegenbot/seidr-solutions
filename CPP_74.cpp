#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    int sum1 = 0;
    int sum2 = 0;
    std::vector<std::vector<std::string>> lst1 = {{}};
    std::vector<std::vector<std::string>> lst2 = {{}};

    if (sum1 < sum2) {
        for (const auto& v : lst1) {
            for (const string& s : v) {
                cout << s << endl;
            }
        }
    } else if (sum1 > sum2) {
        for (const auto& v : lst2) {
            for (const string& s : v) {
                cout << s << endl;
            }
        }
    } else {
        for (const auto& v : lst1) {
            for (const string& s : v) {
                cout << s << endl;
            }
        }
    }
    return 0;
}