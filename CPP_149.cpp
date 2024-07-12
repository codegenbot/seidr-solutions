#include <vector>
#include <algorithm>

bool issame(const std::vector<std::string>& v1, const std::vector<std::string>& v2) {
    if (v1.size() != v2.size()) return false;
    for (int i = 0; i < v1.size(); ++i)
        if (v1[i] != v2[i]) return false;
    return true;
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    auto it = std::unique(lst.begin(), lst.end(),
                           [](const std::string& a, const std::string& b){ return a.length() % 2 == 1; });
    lst.erase(it, lst.end());
    std::sort(lst.begin(), lst.end(),
              [](const std::string& a, const std::string& b) {
                  if (a.length() != b.length())
                      return a.length() < b.length();
                  else
                      return a < b;
              });
    return lst;
}

int main() {
    std::vector<std::string> input = {"abc", "def", "ghi"};
    std::vector<std::string> output = sorted_list_sum(input);
    if (issame(output, {"abc", "def", "ghi"}))
        std::cout << "Success!" << std::endl;
    else
        std::cout << "Failure!" << std::endl;
    return 0;
}