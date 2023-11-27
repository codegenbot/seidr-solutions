#include <vector>
#include <cassert>

using namespace std;

vector<float> get_positive(vector<float> l){
    vector<float> result;
    for(int i=0; i<l.size(); i++){
        if(l[i] > 0){
            result.push_back(l[i]);
        }
    }
    return result;
}

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

int main(){
    assert(issame(get_positive({}), {}));
    assert(issame(get_positive({1, 2, 3}), {1, 2, 3}));
    assert(!issame(get_positive({1, 2, 3}), {3, 2, 1}));
    assert(issame(get_positive({-1, -2, -3, 0, 1, 2, 3}), {1, 2, 3}));
    assert(issame(get_positive({-1, -2, -3, 0}), {}));
    assert(issame(get_positive({1, 2, 3, 0}), {1, 2, 3}));
    
    // Add additional test cases...
    
    return 0;
}