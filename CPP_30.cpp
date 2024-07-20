#include <vector>
#include <cassert>

std::vector<float> get_positive(std::vector<float> v) {
    std::vector<float> result;
    for (float num : v) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

bool issame(std::vector<float> a, std::vector<float> b){
    if(a.size() != b.size())
        return false;
    
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i])
            return false;
    }
    
    return true;
}

int main() {
    assert (issame(get_positive({}) , {}));
    return 0;
}