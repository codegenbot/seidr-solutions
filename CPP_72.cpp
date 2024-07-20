#include <vector>
#include <algorithm>

using namespace std;

bool will_it_fly(vector<int> q, int w) {
    vector<int> v(q);
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++) {
        if (v[i] != q[i]) return false;
    }

    int sum = 0;
    for (int i = 0; i < q.size(); i++) {
        sum += q[i];
    }
    
    return sum <= w;
}