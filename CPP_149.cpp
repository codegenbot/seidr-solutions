```cpp
#include <algorithm>
#include <vector>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> vector_sort(std::vector<std::string> lst) {
    std::sort(lst.begin(), lst.end(),
        [](const std::string& a, const std::string& b) {
            if (a.size() != b.size()) return a.size() < b.size();
            else return a < b;
        });
    auto erase_start = std::remove_if(lst.begin(), lst.end(), 
        [](const std::string& s) { return s.size() % 2; });
    lst.erase(erasetart, lst.end());
    return lst;
}

int main() {
    auto sorted_result = vector_sort({"aaaa", "bbbb", "dd", "cc"});
    assert(issame(sorted_result, {"cc", "dd", "aaaa", "bbbb"}));
}