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
        
        vector<int> temp;
        int diff = 0;
        for(int j = 0; j < min(left.size(), right.size()); j++){
            if(left[j] != right[j]) {
                temp.push_back(abs(left[j]-right[j]));
                if(temp[j] > diff) {
                    diff = temp[j];
                }
            } else {
                break;
            }
        }
        
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