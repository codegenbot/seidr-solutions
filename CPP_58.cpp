#include <set>
#include <vector>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    if(a.size() != b.size()) 
        return false;
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    for(int i = 0; i<a.size(); i++) {
        if(a[i] != b[i]) 
            return false;
    }
    
    return true;
}

int main() {
    vector<int> l1 = {1,2,3};
    vector<int> l2 = {3,4,5};
    cout << (issame(l1,l2) ? "Same" : "Not Same") << endl;
    return 0;
}