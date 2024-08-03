#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    pair<vector<int>, vector<int>> res;
    
    if (n == 1) {
        res.first = v;
        res.second = {};
    } else {
        for (int i = 0; i < n; ++i) {
            int leftSum = accumulate(v.begin(), v.begin() + i, 0);
            int rightSum = accumulate(v.begin() + i, v.end(), 0);
            
            if (leftSum == rightSum || abs(leftSum - rightSum) <= min(abs(leftSum), rightSum)) {
                res.first = vector<int>(v.begin(), v.begin() + i);
                res.second = vector<int>(v.begin() + i, v.end());
                break;
            }
        }
    }
    
    return res;
}