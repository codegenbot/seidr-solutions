#include <vector>

bool issame_vector(vector<float> a, vector<float> b){
    return a == b;
}

int main(){
    assert(issame_vector(get_positive({}), {}));
    return 0;
}