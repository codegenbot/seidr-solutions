#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    int minDiff = INT_MAX;
    int pos = -1;
    
    for (int i = 0; i < n; i++) {
        int sum1 = 0, sum2 = 0;
        for (int j = 0; j <= i; j++) {
            sum1 += v[j];
        }
        for (int j = i + 1; j < n; j++) {
            sum2 += v[j];
        }
        
        int diff = abs(sum1 - sum2);
        if (diff < minDiff) {
            minDiff = diff;
            pos = i;
        }
    }
    
    res[0] = vector<int>(v.begin(), v.begin() + pos);
    res[1] = vector<int>(v.begin() + pos, v.end());
    
    return res;
}