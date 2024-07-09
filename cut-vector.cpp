#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> vec) {
    int minDiff = INT_MAX;
    int cutIndex = -1;
    
    for(int i = 0; i < vec.size() - 1; i++) {
        int diff = abs(vec[i] - vec[i+1]);
        if(diff <= minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    vector<vector<int>> result(2);
    result[0].insert(result[0].end(), vec.begin(), vec.begin() + cutIndex + 1);
    result[1].insert(result[1].begin(), vec.begin() + cutIndex + 1, vec.end());
    
    return result;
}