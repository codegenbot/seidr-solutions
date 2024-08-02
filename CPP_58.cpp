#include <set>
#include <vector>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size())
        return false;
    set<int> s1(a.begin(), a.end());
    set<int> s2(b.begin(), b.end());
    return s1 == s2;
}

int main() {
    int n,m;
    cin >> n >> m;
    vector<int> l1(n);
    for(int i = 0; i < n; i++) cin >> l1[i];
    vector<int> l2(m);
    for(int i = 0; i < m; i++) cin >> l2[i];
    
    if(issame(l1,l2))
        cout << "The lists are the same.\n";
    else
        cout << "The lists are not the same.\n";
    return 0;
}