#include <vector>
#include <assert.h>

bool issame(const std::vector<float>& a, const std::vector<float>& b){
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

int main(){
    assert(issame(get_positive({}), {}));
    //...rest of the code...
}