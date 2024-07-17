#include <climits>
#include <vector>
#include <numeric>

using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    vector<vector<int>> result(2);
    
    for(int i = 1; i <= v.size(); i++) {
        int left_sum = accumulate(v.begin(), v.begin() + i, 0);
        int right_sum = accumulate(v.begin() + i, v.end(), 0);
        
        if(abs(left_sum - right_sum) < INT_MAX) {
            result[0] = vector<int>(v.begin(), v.begin() + i);
            result[1] = vector<int>(v.begin() + i, v.end());
            return result;
        }
    }
    
    return {{},{}};
}

int main() {
    vector<int> v = {9191, 652, 6176, 2479, 8717};
    vector<vector<int>> result = cutVector(v);
    // do something with result
    return 0;
}