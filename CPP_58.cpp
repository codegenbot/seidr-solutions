#include <vector>
bool issame(vector<int> a,vector<int>b){
    return (a==b);
}

vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());
    set<int> result;
    
    for (auto x : s1) {
        if (s2.find(x) != s2.end()) {
            result.insert(x);
        }
    }
    
    vector<int> res;
    for (auto x : result) {
        res.push_back(x);
    }
    
    sort(res.begin(), res.end());
    return res;
}

int main() {
    assert (issame(common({4, 3, 2, 8}, {}) , {}));
    // Rest of your code...
}