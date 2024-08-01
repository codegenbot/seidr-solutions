#include <vector>
#include <assert.h>

using namespace std;

vector<float> get_positive(vector<float> l){
    vector<float> result;
    for(auto x : l) {
        if(x > 0)
            result.push_back(x);
    }
    return result;
}

bool issame(vector<float> a,vector<float>b){
    if(a.size()!=b.size())return false;
    for(int i=0;i<a.size();i++)if(abs(a[i]-b[i])>1e-5)return false;
    return true;
}

int main() {
    assert(issame(get_positive({}), {}) );
    return 0;
}