#include <vector>
#include <assert>

vector<vector<float>> get_positive(vector<vector<float>> l){
    vector<vector<float>> result;
    for (auto &i : l) {
        vector<float> temp;
        for (float j : i) {
            if (j > 0) {
                temp.push_back(j);
            }
        }
        if (!temp.empty()) {
            result.push_back(temp);
        }
    }
    return result;
}