#include <vector>
#include <assert.h>

bool issame(vector<float> a,vector<float>b){
    return (a.size() == b.size()) && equal(a.begin(), a.end(),b.begin());
}

vector<float> get_positive(vector<float> l){
    vector<float> result;
    for(float x : l) {
        if(x > 0)
            result.push_back(x);
    }
    return result;
}

int main(){
    assert(std::equal(get_positive({}).begin(), get_positive({}).end(), {}));
    return 0;
}