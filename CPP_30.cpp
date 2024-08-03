#include <vector>
#include <algorithm>

bool issame(vector<float> a,vector<float>b){
    return a == b;
}

vector<float> get_positive(vector<float> l) {
    vector<float> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    sort(result.begin(), result.end());
    vector<float> unique_result;
    for (float num : result) {
        if (!issame(unique_result, vector<float>{num})) {
            unique_result.push_back(num);
        }
    }
    return unique_result;
}