```cpp
#include <vector>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    // Your logic here to check if two vectors are same
    return a == b;
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    auto it = std::remove_if(lst.begin(), lst.end(),
                        [](const std::string& str){ return str.length() % 2; });
    lst.erase(it, lst.end());
    std::sort(lst.begin(), lst.end(),
         [](const std::string& a, const std::string& b){
             if (a.length() == b.length()) {
                 return a < b;
             } else {
                 return a.length() < b.length();
             }
         });
    return lst;
}

int main() {
    assert(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}) == {"cc","dd"});
    return 0;
}