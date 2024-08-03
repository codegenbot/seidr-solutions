#include <vector>
#include <cassert>

bool issame(const vector<float>& a, const vector<float>& b){
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
}

vector<float> derivative(const vector<float>& xs){
    vector<float> result;
    for(int i = 1; i < xs.size(); i++){
        result.push_back(xs[i] * i);
    }
    return result;
}

int main() {
    assert(issame(derivative({1}), {}));
    return 0;
}