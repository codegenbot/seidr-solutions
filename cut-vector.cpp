#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> vec) {
    int minDiff = INT_MAX;
    int splitIndex = 0;
    
    for (int i = 1; i <= vec.size(); ++i) {
        int leftSum = 0;
        int rightSum = accumulate(vec.begin(), vec.end() - i, 0);
        
        if (abs(leftSum - rightSum) < minDiff) {
            minDiff = abs(leftSum - rightSum);
            splitIndex = i;
        }
    }
    
    vector<vector<int>> result(2);
    result[0].resize(splitIndex);
    result[1].resize(vec.size() - splitIndex);
    
    copy(vec.begin(), vec.begin() + splitIndex, back_inserter(result[0]));
    copy(vec.begin() + splitIndex, vec.end(), back_inserter(result[1]));
    
    return result;
}