#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& vec) {
    int n = vec.size();
    vector<int> left, right;
    
    for (int i = 0; i < n; i++) {
        left.push_back(vec[i]);
        
        if ((i >= 1 && vec[i-1] != vec[i]) || (i == n - 1)) {
            int minDiff = INT_MAX, prevVal = left.back();
            
            for (int j = i; j < n; j++) {
                if (vec[j] == prevVal) {
                    right = vector<int>(vec.begin() + i, vec.end());
                    return {left, right};
                }
                
                int diff = abs(prevVal - vec[j]);
                minDiff = min(minDiff, diff);
            }
            
            break;
        }
    }
    
    return {{}, {}};
}