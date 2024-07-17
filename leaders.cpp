#include <algorithm>
#include <iostream> 
using namespace std;

vector<int> leaders(vector<int> v) {
    vector<int> res;
    int lastLeader = v.back();
    res.push_back(lastLeader);

    for (int i = v.size() - 2; i >= 0; --i) {
        if (v[i] >= lastLeader) {
            lastLeader = v[i];
            res.push_back(lastLeader);
        }
    }

    reverse(res.begin(), res.end());
    return res;
}

int main() {
    vector<int> v = {1, 3, 4, 1, 5};
    vector<int> result = leaders(v);
    for (int x : result) cout << x << " ";
    return 0;
}