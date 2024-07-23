```cpp
#include <iostream>
#include <vector>

using namespace std;

vector<int> leaders(vector<int>& v) {
    vector<int> res;
    int rightmost = v.back();
    res.push_back(rightmost);
    for (int i = v.size() - 2; i >= 0; --i) {
        int temp = v[i];
        if (temp >= rightmost) {
            rightmost = temp;
            res.push_back(rightmost);
        }
    }
    return res;
}

vector<int> v = {1, 3, 4, 2, 8};
vector<int> res = leaders(v);
for (int i = 0; i < res.size(); ++i) {
    cout << res[i] << " ";
}