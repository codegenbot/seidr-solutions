#include <algorithm>
#include <iostream> 
using namespace std;

vector<int> leaders(vector<int> v) {
    vector<int> res;
    for (int i = 0; i < v.size(); ++i) {
        res.push_back(v[i]);
        for (int j = i + 1; j < v.size(); ++j) {
            if (v[j] >= res.back()) {
                res.pop_back();
                break;
            }
        }
    }
    return res;
}

int main() {
    vector<int> v = {12, 993, 557, 890, 695, 295, 484, 866, 801, 909, 397, 667, 431};
    vector<int> result = leaders(v);
    for (int x : result) cout << x << " ";
    return 0;
}