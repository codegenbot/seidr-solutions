#include <algorithm>
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<string> sorted_list_sum(vector<string> lst) {
    auto it = remove_if(lst.begin(), lst.end(), 
                        [](const string& str){ return str.length() % 2; });
    lst.erase(it, lst.end());
    sort(lst.begin(), lst.end(),
         [](const string& a, const string& b){
             if (a.length() == b.length()) {
                 return a < b;
             } else {
                 return a.length() < b.length();
             }
         });
    return lst;
}

int main() {
    assert(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}) == {"cc", "dd", "aaaa", "bbbb"});
    return 0;
}