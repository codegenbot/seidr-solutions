#include <vector>
#include <algorithm>

using namespace std;

bool will_it_fly(vector<int> q, int w) {
    reverse(q.begin(), q.end());
    for (int i = 0; i < q.size(); i++) {
        if (q[i] != vector<int>(q.rbegin(), q.rend())[i]) return false;
    }
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    return sum <= w;
}