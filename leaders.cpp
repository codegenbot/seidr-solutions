Here is the completed code:

#include <vector>
using namespace std;

vector<int> leaders(vector<int>& v) {
    vector<int> res;
    int rightmost = v.back();
    for (int i = v.size() - 2; i >= 0; --i) {
        if (v[i] >= rightmost) {
            res.push_back(v[i]);
            rightmost = v[i];
        }
    }
    res.push_back(rightmost);
    return res;
}