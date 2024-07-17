```cpp
#include <algorithm>
#include <iostream> 
using namespace std;

vector<int> leaders(vector<int> v) {
    vector<int> res;
    int last_leader = v.back();
    res.push_back(last_leader);

    for (int i = v.size() - 2; i >= 0; --i) {
        if (v[i] >= last_leader) {
            last_leader = v[i];
            res.push_back(last_leader);
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