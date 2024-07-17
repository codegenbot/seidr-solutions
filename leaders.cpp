```cpp
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> leaders(vector<int> v) {
    vector<int> res;
    int rightmost = v.back();
    res.push_back(rightmost);

    for (int i = v.size() - 2; i >= 0; --i) {
        if (v[i] >= rightmost) {
            rightmost = v[i];
            res.push_back(rightmost);
        }
    }

    reverse(res.begin(), res.end());
    return res;
}

vector<int> leaders(vector<int> a) {
    int n = a.size();
    vector<int> ans;
    ans.push_back(a[n-1]);
    for(int i=n-2; i>=0; i--){
        if(a[i]>=ans.back())
            ans.push_back(a[i]);
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main() {
    vector<int> v = {1, 3, 4, 1, 5};
    vector<int> result = leaders(v);
    for (int x : result) cout << x << " ";
    return 0;
}