#include <vector>
#include <cassert>

bool issame(std::vector<float> a, std::vector<float> b){
    if(a.size() != b.size()) {
        return false;
    }
    
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    std::vector<float> l = {1.5, -2.3, 3.0, 4.7, -5.2};
    std::vector<float> positive_numbers;
    for (float num : l) {
        if (num > 0) {
            positive_numbers.push_back(num);
        }
    }
    
    assert(issame(positive_numbers, {1.5, 3.0, 4.7}));
}