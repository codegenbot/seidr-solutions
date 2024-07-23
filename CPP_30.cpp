#include <vector>
#include <algorithm>

bool issame(vector<float> a, vector<float> b) {
    return a.size() == b.size() && std::all_of(a.begin(), a.end(),
        [&](float x) { return std::find(b.begin(), b.end(), x) != b.end(); });
}

vector<float> get_positive(vector<float> l){
    vector<float> result;
    for(float i : l){
        if(i > 0) result.push_back(i);
    }
    return result;
}