#include <vector>
#include <cassert>

using namespace std;

bool issame(const vector<float>& a, const vector<float>& b){
    return a == b;
}

vector<float> derivative(const vector<float>& xs){
    vector<float> result;
    for(size_t i = 1; i < xs.size(); i++){
        result.push_back(xs[i] * static_cast<float>(i));
    }
    return result;
}

int main(){
    assert(issame(derivative({1.0f}), {}));
}