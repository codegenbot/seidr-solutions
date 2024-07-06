```
#include <algorithm>
#include <assert.h>

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size())
        return false;
    
    for(int i = 0; i < a.size(); i++) {
        if(a[i].size() % 2 == 1 && b[i].size() % 2 == 0 || 
           a[i].size() % 2 == 0 && b[i].size() % 2 == 1)
            return false;
    }
    
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i])
            return false;
    }
    
    return true;
}

vector<string> vector_sort(vector<string> lst) {
    auto it = unique(lst.begin(), lst.end(), 
        [](const string& a, const string& b){ return (a.size() % 2 == 1 && b.size() % 2 == 0) || (a.size() % 2 == 0 && b.size() % 2 == 1); });
    lst.erase(unique(it, lst.end()), lst.end());
    
    sort(lst.begin(), lst.end(), 
        [](const string& a, const string& b){
            if(a.size() != b.size())
                return (a.size() < b.size());
            else
                return a < b;
        }
    );
    
    return lst;
}

int main() {
    vector<string> vec = {"aaaa", "bbbb", "dd", "cc"};
    vector<string> expected = {"ccc", "dd", "aaaa", "bbbb"};
    assert(issame(vector_sort(vec), expected));
}