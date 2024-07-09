#include <vector>
#include <set>
using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());
    set<int> result;
    
    for(auto i : s1){
        if(s2.find(i) != s2.end()){
            result.insert(i);
        }
    }
    
    vector<int> res(result.begin(),result.end());
    sort(res.begin(),res.end());
    return res;
}

int main() {
    assert(issame(common({4, 3, 2, 8}, {}), {}));
    // Your implementation for 'main' here
}