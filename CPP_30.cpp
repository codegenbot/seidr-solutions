#include <vector>
#include <assert.h>

bool issame(std::vector<float> a, std::set<float> b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(float x : a) {
        if(!b.count(x)) {
            return false;
        }
    }
    return true;
}

int main() {
    assert (issame(get_positive({}), {})); 
}