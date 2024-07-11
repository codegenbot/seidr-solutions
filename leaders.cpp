#include <vector>
using namespace std;

vector<int> leaders(vector<int> v) {
    vector<int> res;
    int rightMost = v.back();
    for(int i = v.size() - 2; i >= 0; i--) {
        if(v[i] >= rightMost) {
            rightMost = v[i];
            res.push_back(rightMost);
        }
    }
    reverse(res.begin(), res.end());
    return res;
}