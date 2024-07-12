#include <vector>
#include <algorithm>

bool issame(vector<float> a, vector<vector<float>> b) {
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), [](float x, const auto& y){return x==0 || std::any_of(y.begin(),y.end(),x==);});
}

vector<float> get_positive(vector<float> l){
    vector<float> result;
    for(float x : l){
        if(x > 0)
            result.push_back(x);
    }
    return result;
}

int main() {
    vector<float> input = {1, -2, 3, -4, 5};
    assert(issame(get_positive(input), get_positive({})));  
    return 0;
}