#include <climits>
#include <vector>
#include <numeric>

using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    pair<vector<int>, vector<int>> res;

    for(int i=0; i<v.size(); i++) {
        vector<int> left(v.begin(), v.begin()+i);
        vector<int> right(v.begin()+i, v.end());

        if(left.size() == 0 || right.size() == 0) continue;

        int diff = absaccumulate(left.begin(), left.end(), 0) - absaccumulate(right.begin(), right.end(), 0);

        if(diff < min_diff) {
            min_diff = diff;
            res = {left, right};
        }
    }

    return res;
}