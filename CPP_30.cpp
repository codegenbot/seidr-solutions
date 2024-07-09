```
#include <vector>

std::vector<float> get_positive(std::vector<float> l){
    std::vector<float> result;
    for(float num : l) {
        if(num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

bool same(vector<float> a,vector<float>b){
    return std::equal(a.begin(),a.end(),b.begin());
}

int main() {
    assert(same(get_positive({}),{}));
    return 0;
}