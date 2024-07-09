#include <vector>
#include <cassert>

bool issame(std::vector<float> a, std::vector<float>b){
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<float> my_vector(float l[]){ 
    std::vector<float> result;
    for(float i : {l,l+sizeof(l)/sizeof(*l)}) {
        if(i > 0)
            result.push_back(i);
    }
    return result;
}

int main() {
    assert(issame(my_vector({}), {}));
    return 0;
}