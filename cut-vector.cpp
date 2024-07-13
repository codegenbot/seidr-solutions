#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> &vec) {
    int n = vec.size();
    vector<vector<int>> result;
    
    for (int i = 1; i <= n/2; i++) {
        if (vec[i] - vec[0] == vec[n-i-1] - vec[0]) {
            result.push_back({vec.begin(), vec.begin() + i});
            result.push_back({vec.begin() + i, vec.end()});
            return result;
        }
    }

    int min_diff = INT_MAX;
    for (int i = 0; i < n/2; i++) {
        int diff = abs(vec[i] - vec[0]) - abs(vec[n-i-1] - vec[0]);
        if (diff < min_diff) {
            result.push_back({vec.begin(), vec.begin() + i+1});
            result.push_back({vec.begin() + i+1, vec.end()});
            return result;
        }
    }

    result.push_back({vec.begin(), vec.end()});
    return result;
}