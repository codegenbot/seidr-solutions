#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    pair<vector<int>, vector<int>> result;
    
    int total = 0;
    for (int i = 0; i < vec.size(); i++) {
        total += vec[i];
    }
    
    int leftSum = 0, minDiff = INT_MAX;
    for (int i = 0; i < vec.size(); i++) {
        if ((total - leftSum) - leftSum <= minDiff) {
            result.first = vector<int>(vec.begin(), vec.begin() + i);
            result.second = vector<int>(vec.begin() + i, vec.end());
            return result;
        }
        leftSum += vec[i];
    }
    
    return result;
}