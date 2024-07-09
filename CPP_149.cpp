#include <algorithm>
#include <vector>

std::vector<std::string> vector_sort(std::vector<std::string> lst) {
    std::sort(lst.begin(), lst.end(),
        [](const std::string& a, const std::string& b) {
            if (a.size() != b.size()) return a.size() < b.size();
            else return a < b;
        });
    std::vector<std::string> result;
    for (auto s : lst) {
        if (s.size() % 2) {
            result.push_back(s);
        }
    }
    return result;
}

int main() {
    auto sorted_result = vector_sort({"aaaa", "bbbb", "dd", "cc"});
    // your assertions here
    return 0;
}