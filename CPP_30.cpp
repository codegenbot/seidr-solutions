# Code:
#include <vector>
#include <cassert>

bool issame(std::vector<float> l1, std::vector<float> l2){
    if (l1.size() != l2.size()) {
        return false;
    }
    for (int i = 0; i < l1.size(); i++) {
        if (l1[i] != l2[i]) {
            return false;
        }
    }
    return true;
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

int main(){
    std::vector<float> l1 = {1.2, -3.4, 5.6, -7.8};
    std::vector<float> l2 = {-1.2, 3.4, -5.6, 7.8};

    assert(issame(l1, l2));
    assert(get_positive(l1).size() == 2);

    return 0;
}