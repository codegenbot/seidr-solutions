```cpp
#include <vector>
using namespace std;

int main() {
    vector<int> v = {16, 17, 4, 3, 5, 2};
    vector<int> res = leaders(v);
    for(int i : res) cout << i << " ";
    return 0;
}

vector<int> leaders(vector<int> v) {
    int n = v.size();
    vector<int> res;
    if(n == 1) return v;
    int leader = v[n-1];
    res.push_back(leader);
    for(int i=n-2; i>=0; i--){
        if(v[i] >= leader){
            leader = v[i];
            res.push_back(leader);
        }
    }
    reverse(res.begin(), res.end());
    return res;
}