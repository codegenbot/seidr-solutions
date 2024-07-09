#include <vector>
#include <assert.h>

bool isSame(const std::vector<float>& v1, const std::vector<float>& v2) {
    if(v1.size() != v2.size())
        return false;
    
    for(int i=0; i<v1.size(); i++)
        if(std::abs(v1[i] - v2[i]) > 1e-5)
            return false;
    
    return true;
}

int main() {
    assert(isSame(get_positive({}), {}));  
}