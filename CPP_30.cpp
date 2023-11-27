#include <vector>
#include <cassert>

using namespace std;

vector<float> get_positive(vector<float> l){
    vector<float> positive_nums;
    for(int i=0; i<l.size(); i++){
        if(l[i] > 0){
            positive_nums.push_back(l[i]);
        }
    }
    return positive_nums;
}

bool issame(vector<float> a, vector<float> b){
    if(a.size() != b.size())
        return false;
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int main(){
    assert(issame(get_positive({}), {}));
    assert(issame(get_positive({-1, -2, -3}), {}));
    assert(issame(get_positive({1, 2, 3, 4, 5}), {1, 2, 3, 4, 5}));
    assert(issame(get_positive({-1, 2, -3, 4, -5}), {2, 4}));
    assert(issame(get_positive({0, 0, 0, 0, 0}), {}));
    assert(issame(get_positive({-1.5, 2.5, -3.5, 4.5, -5.5}), {2.5, 4.5}));
    assert(issame(get_positive({-1.5, 0, 3.5, 0, -5.5}), {3.5}));
    assert(issame(get_positive({1.1, 2.2, 3.3, 4.4, 5.5}), {1.1, 2.2, 3.3, 4.4, 5.5}));

    return 0;
}