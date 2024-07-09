#include <vector>
#include <algorithm>

std::vector<float> get_positive(std::vector<float> l){
    std::vector<float> result;
    for(float num : l) {
        if(num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

bool are_equal(std::vector<float> a, std::vector<float> b){
    return std::equal(a.begin(),a.end(),b.begin());
}

std::vector<float> get_positive(std::vector<float> l){
    std::vector<float> result;
    for(float num : l) {
        if(num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

bool are_equal(std::vector<float> a, std::vector<float> b){
    return std::equal(a.begin(),a.end(),b.begin());
}

int main() {
    assert (are_equal(get_positive({}), {}) );
    return 0;
}