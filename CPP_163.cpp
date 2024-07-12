#include <vector>

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

int main(){
    assert(issame(generate_integers(17, 89), {}));
}