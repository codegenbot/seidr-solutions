```cpp
#include <vector>
#include <algorithm>

bool issame(vector<string> a,vector<string>b){
    return a==b;
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    auto it = std::unique(lst.begin(), lst.end(),
                          [](const string& a, const string& b){ 
                              return a.length() % 2 == 1; });
    lst.erase(it, lst.end());
    
    std::sort(lst.begin(), lst.end(),
         [](const string& a, const string& b) {
             if (a.length() != b.length()) {
                 return a.length() < b.length();
             } else {
                 return a < b;
             }
         });
    
    return lst;
}

int main() {
    // Test your function
    assert(issame(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), {"cc", "dd", "aaaa", "bbbb"}));
    return 0;
}