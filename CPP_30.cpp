#include <vector>

bool are_same(std::vector<float> a, std::vector<float> b){
    return a == b;
}

std::vector<float> get_positive(std::vector<float> l){
    std::vector<float> result;
    for(float num : l){
        if(num > 0){
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    assert (are_same(get_positive({}) , {}));
    return 0;
}