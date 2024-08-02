#include <vector>
#include <algorithm>

bool issame(vector<float> a, vector<float> b){
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

vector<std::float> get_positive(vector<float> l){
    vector<std::float> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}