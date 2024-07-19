#include <algorithm>
#include <string>
#include <vector>

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    lst.erase(std::remove_if(lst.begin(), lst.end(), [](const std::string& s){return s.length() % 2 != 0;}), lst.end());
    std::sort(lst.begin(), lst.end(), [](const std::string& a, const std::string& b) {
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    return lst;
}
int main() {
    std::vector<std::string> lst = {"hello", "cpp", "problem", "solved"};
    std::vector<std::string> result = sorted_list_sum(lst);
    for(const auto& str : result) {
        std::cout << str << std::endl;
    }
    return 0;
}