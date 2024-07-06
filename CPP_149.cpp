```
#include <algorithm>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size())
        return false;
    
    for(int i = 0; i < a.size(); i++) {
        if(a[i].size() % 2 == 1 && b[i].size() % 2 == 0 || 
           a[i].size() % 2 == 0 && b[i].size() % 2 == 1) 
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

int sorted_list_sum(vector<string> input) {
    vector<string> result = vector_sort(input);
    int sum = 0;
    for(const string& s : result) 
        sum += s.size();
    return sum;
}

int main() {
    cout << sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}) << endl;
}