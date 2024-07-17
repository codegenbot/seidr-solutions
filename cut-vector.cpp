#include <climits>
#include <vector>
#include <numeric>

using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    vector<vector<int>> result(2);
    
    for(int i = 1; i <= v.size(); i++) {
        vector<int> left(v.begin(), v.begin() + i);
        vector<int> right(v.begin() + i, v.end());
        
        double mean_left = (double)accumulate(left.begin(), left.end(), 0) / left.size();
        double mean_right = (double)accumulate(right.begin(), right.end(), 0) / right.size();
        
        int diff = abs((int)(mean_left - mean_right));
        
        if(diff < min_diff) {
            min_diff = diff;
            result[0] = vector<int>(left.begin(), left.end());
            result[1] = vector<int>(right.begin(), right.end());
        }
    }
    
    return result;
}

int main() {
    vector<int> v = {9191, 652, 6176, 2479, 8717};
    vector<vector<int>> result = cutVector(v);
    // do something with result
    return 0;
}