#include <set>
#include <vector>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    if(a.size() != b.size()) return false;
    set<int> s1(a.begin(), a.end());
    set<int> s2(b.begin(), b.end());
    return (s1==s2);
}

int main() {
    vector<int> l1 = {1, 2, 3};
    vector<int> l2 = {3, 4, 5};
    if(issame(l1,l2))
        cout << "The vectors are the same." << endl;
    else
        cout << "The vectors are not the same." << endl;
    return 0;
}