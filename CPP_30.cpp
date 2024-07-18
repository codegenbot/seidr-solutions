#include <vector>
#include <cassert>

bool issame(std::vector<float> a, std::vector<float> b){
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
    assert(issame(std::vector<float>{3.0}, std::vector<float>{3.0}));
    assert(get_positive({1.5, -2.3, 4.0, -5.2}).size() == 2);
    assert(get_positive({}).size() == 0);
    return 0;
}