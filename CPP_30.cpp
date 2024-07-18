#include <vector>
#include <cassert>

bool issame(float a, float b){
    return a == b;
}

std::vector<float> get_positive(std::vector<float> l);

std::vector<float> get_positive(std::vector<float> l){
    std::vector<float> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

int main(){
    assert(issame(3.0, 3.0));
    assert(get_positive({}).size() == 0);
    return 0;
}