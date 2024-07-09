#include <algorithm>
#include <vector>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

std::vector<std::string> sorted_list_sum(const std::vector<std::string>& lst) {
    std::sort(lst.begin(), lst.end(),
        [](const std::string& a, const std::string& b){
            if(a.size() != b.size()) return a.size() < b.size();
            else return a < b;
        });
    std::erase_if(lst, [](const std::string& s){return s.size() % 2;});
    return lst;
}

int main() {
    auto result = sorted_list_sum({"aaaa", "bbbb", "dd", "cc"});
    //assert(issame(result, {"cc", "dd", "aaaa", "bbbb"}));
    for (const auto& str : result) {
        std::cout << str << " ";
    }
    std::cout << "\n";
    return 0;
}