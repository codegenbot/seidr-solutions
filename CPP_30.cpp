#include <vector>
#include <cassert>

bool issame(float a, float b){
    return a == b;
}

std::vector<float> get_positive(std::vector<float> l){
    std::vector<float> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

void get_positive_test(){
    std::vector<float> v = {1.5, -2.3, 4.0, -5.2};
    assert(get_positive(v).size() == 2);
}

int main(){
    assert(issame(3.0, 3.0));
    get_positive_test();
    return 0;
}