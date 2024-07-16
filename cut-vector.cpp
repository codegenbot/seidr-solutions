#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> arr) {
    int n = arr.size();
    vector<vector<int>> res(2);
    
    if (n == 0) return res;
    if (n == 1) {
        res[0] = arr;
        res[1] = {};
        return res;
    }
    
    for (int i = 0; i < n; ++i) {
        vector<int> left(arr.begin(), arr.begin() + i);
        vector<int> right(arr.begin() + i, arr.end());
        
        if ((left.size() == 1 && right.size() == 1) || 
            (left.size() > 0 && right.size() > 0 && abs(left.back() - right.front()) <= 1)) {
            res[0] = left;
            res[1].clear();
            res[1].insert(res[1].end(), right.begin(), right.end());
            return res;
        }
    }
    
    res[0] = arr;
    res[1] = {};
    return res;
}