#include <iostream>
#include <vector>
#include <cassert>

std::vector<float> get_positive(const std::vector<float>& l) {
    std::vector<float> positive_nums;
    for(int i=0; i<l.size(); i++){
        if(l[i] > 0) {
            positive_nums.push_back(l[i]);
        }
    }
    return positive_nums;
}

int main() {
    assert(get_positive({}) == std::vector<float>{});

    std::cout << "Test case passed!" << std::endl;

    return 0;
}