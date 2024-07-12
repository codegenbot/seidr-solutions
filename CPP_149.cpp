#include <algorithm>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> sorted_list_sum(vector<string> lst) {
    auto it = unique(lst.begin(), lst.end(),
        [](const string& a, const string& b){return a.length() % 2 == 1 && a.length() != b.length();});
    lst.erase(it, lst.end());
    
    sort(lst.begin(), lst.end(),
        [](const string& a, const string& b){
            if(a.length() != b.length()) {
                return a.length() < b.length();
            } else {
                return a < b;
            }
        });
    
    return lst;
}

int main() {
    vector<string> result = sorted_list_sum({"aaaa", "bbbb", "dd", "cc"});
    // Check the correctness of the function
    assert(result == vector<string>{"aa", "bb", "cc", "dd"});
    return 0;
}