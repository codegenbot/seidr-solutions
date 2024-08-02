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
    int n1, n2;
    cin >> n1 >> n2;

    vector<int> l1(n1);
    for (int i = 0; i < n1; i++)
        cin >> l1[i];

    vector<int> l2(n2);
    for (int i = 0; i < n2; i++)
        cin >> l2[i];

    if (issame(l1, l2))
        cout << "Same";
    else
        cout << "Not Same";

    return 0;
}