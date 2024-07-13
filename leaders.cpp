#include <vector>
using namespace std;

vector<int> leaders(vector<int>& vec) {
    vector<int> res;
    int rightmost = vec.back();
    for (int i = vec.size() - 2; i >= 0; --i) {
        if (vec[i] >= rightmost) {
            res.push_back(vec[i]);
            rightmost = vec[i];
        }
    }
    res.push_back(rightmost);
    reverse(res.begin(), res.end());
    return res;
}