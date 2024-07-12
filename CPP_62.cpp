#include <vector>
#include <cassert>

bool issame(const vector<float>& a, const vector<float>& b){
    return a == b;
}

int main(){
    assert(issame(vector<float>({1.0f}), vector<float>{}));
    return 0;
}