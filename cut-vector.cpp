#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    int index = 0;
    
    for (int i = 1; i <= v.size(); i++) {
        if (i == v.size() || v[i] - v[i-1] < minDiff) {
            minDiff = v[i] - v[i-1];
            index = i;
        }
    }
    
    return {{}, {}}; // Your code here
}