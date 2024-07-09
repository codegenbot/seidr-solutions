#include <algorithm>
#include <vector>

std::vector<std::string> vector_sort(std::vector<std::string> lst) {
    std::sort(lst.begin(), lst.end(),
        [](const std::string& a, const std::string& b){
            if(a.size() != b.size()) return a.size() < b.size();
            else return a < b;
        });
    std::erase_if(lst, [](const std::string& s){return s.size() % 2;});
    return lst;
}

int main() {
    auto sorted_result = vector_sort({"aaaa", "bbbb", "dd", "cc"});
    assert(sorted_result == std::vector<std::string>({"cc", "dd", "aaaa", "bbbb"}));
}