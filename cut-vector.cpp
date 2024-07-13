```cpp
#include <vector>
#include <climits> 
#include <cmath>  
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    int idx = -1;
    for (int i = 0; i < v.size() - 1; i++) {
        int diff = abs(v[i] - v[i + 1]);
        if (diff < minDiff) {
            minDiff = diff;
            idx = i;
        }
    }
    vector<vector<int>> result(2);
    result[0].insert(result[0].end(), v.begin(), v.begin() + idx + 1);
    result[1].insert(result[1].begin(), v.begin() + idx, v.end());
    return result;
}