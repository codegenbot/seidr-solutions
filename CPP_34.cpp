```cpp
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

vector<int> removeDuplicates(vector<int> l){
    sort(l.begin(), l.end());
    l.erase(unique(l.begin(), l.end()), l.end());
    return l;
}

bool issameSet(vector<int> a,vector<int>b){
    set<int> s1(a.begin(), a.end());
    set<int> s2(b.begin(), b.end());
    return s1 == s2;
}

int main() {
    assert(issameSet({5, 3, 5, 2, 3, 3, 9, 0, 123}, {0, 2, 3, 5, 9, 123}));
    //...
}