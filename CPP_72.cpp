```
#include <iostream>
#include <vector>
using namespace std;

bool will_it_fly(vector<int> q, int w) {
    vector<int> v(q);
    reverse(v.begin(), v.end());
    if (v != q)
        return false;
    int sum = 0;
    for (int i : q)
        sum += i;
    return sum <= w;
}

int main() {
    int n, w;
    cin >> n >> w;
    vector<int> q(n);
    for(int i=0; i<n; i++) {
        cin >> q[i];
    }
    if(will_it_fly(q,w))
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}