#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    pair<vector<int>, vector<int>> result;
    
    for (int i = 0; i < v.size() - 1; i++) {
        int sumLeft = 0, sumRight = 0;
        
        for (int j = 0; j <= i; j++)
            sumLeft += v[j];
        
        for (int j = i + 1; j < v.size(); j++)
            sumRight += v[j];
        
        int diff = abs(sumLeft - sumRight);
        if (diff < minDiff) {
            minDiff = diff;
            result.first = vector<int>(v.begin(), v.begin() + i + 1);
            result.second = vector<int>(v.begin() + i + 1, v.end());
        }
    }
    
    return result;
}