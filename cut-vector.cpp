```cpp
#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int cut_index = 0;

    for(int i = 1; i < v.size(); i++) {
        int diff = abs(v[i] - v[0]);
        if(diff <= min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }

    auto left = vector<int>(v.begin(), v.begin() + cut_index);
    auto right = vector<int>(v.begin() + cut_index, v.end());
    return {left, right};
}