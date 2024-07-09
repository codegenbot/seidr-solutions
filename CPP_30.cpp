#include <vector>
#include <cassert>

std::vector<float> get_positive(std::vector<float> l){
    std::vector<float> result;
    for(auto num : l){
        if(num > 0){
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    assert(issame(get_positive({}), {}));
}