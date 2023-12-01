#include <vector>
#include <assert.h>

vector<float> get_positive(vector<float> l);

bool issame(vector<float> a,vector<float> b);

int main() {
    assert (issame(get_positive({}) , {}));
    return 0;
}

vector<float> get_positive(vector<float> l){
    vector<float> result;
    for(int i = 0; i < l.size(); i++){
        if(l[i] > 0){
            result.push_back(l[i]);
        }
    }
    return result;
}

bool issame(vector<float> a,vector<float> b){
    // Implementation here
}