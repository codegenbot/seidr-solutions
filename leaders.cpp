#include <vector>
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