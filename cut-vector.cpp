#include <climits>
#include <vector>
#include <initializer_list>
#include <algorithm>
#include <numeric>

using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    vector<vector<int>> result(2);
    
    for(int i = 1; i <= v.size(); i++) {
        vector<int> left(v.begin(), v.begin() + i);
        vector<int> right(v.begin() + i, v.end());
        
        int diff = abs((accumulate(left.begin(), left.end(), 0) - 
                       (accumulate(right.begin(), right.end(), 0))));
        
        if(diff < min_diff) {
            min_diff = diff;
            result[0] = left;
            result[1] = right;
        }
    }
    
    return result;
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    vector<vector<int>> result = cutVector(v);
    // do something with result
    return 0;
}