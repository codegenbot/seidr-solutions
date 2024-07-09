#include <algorithm>
#include <vector>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<string> sorted_list_sum(vector<string> lst) {
    sort(lst.begin(), lst.end(), 
        [](const string& a, const string& b){
            if(a.size() != b.size()) return a.size() < b.size();
            else return a < b;
        });
    erase_if(lst, [](const string& s){return s.size() % 2;});
    return lst;
}

int main() {
    vector<string> result = sorted_list_sum({"aaaa", "bbbb", "dd", "cc"});
    assert(issame(result, {"ccc", "dd", "aaaa", "bbbb"}));
    return 0;
}