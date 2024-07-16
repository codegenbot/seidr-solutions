#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int minDiff = INT_MAX;
    pair<vector<int>, vector<int>> result;
    
    for (int i = 0; i < vec.size() - 1; i++) {
        int diff = abs(vec[i] - vec[i + 1]);
        if (diff <= minDiff) {
            minDiff = diff;
            result = {{vec[0], vec[i]} , {vec[i+1], vec.back()}};
        }
    }
    
    return result;
}