#include <vector>
#include <cassert>

bool issame(vector<float> a, vector<float> b);

vector<float> derivative(vector<float> xs);

bool issame(vector<float> a, vector<float> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

vector<float> derivative(vector<float> xs){
    vector<float> result;
    for(int i=1; i<xs.size(); i++){
        result.push_back(xs[i] * i);
    }
    return result;
}

int main() {
    // test cases
    vector<float> xs = {1, 2, 3, 4, 5};
    vector<float> expected = {2, 6, 12, 20};
    vector<float> result = derivative(xs);
    assert(issame(result, expected));

    xs = {1, 1, 1, 1, 1};
    expected = {1, 2, 3, 4};
    result = derivative(xs);
    assert(issame(result, expected));

    xs = {1};
    expected = {};
    result = derivative(xs);
    assert(issame(result, expected));

    xs = {};
    expected = {};
    result = derivative(xs);
    assert(issame(result, expected));

    return 0;
}