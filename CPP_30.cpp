#include <iostream>
#include <vector>
#include <cassert>

std::vector<float> get_positive(std::vector<float> l){
    std::vector<float> positive_nums;
    for(int i=0; i<l.size(); i++){
        if(l[i] > 0){
            positive_nums.push_back(l[i]);
        }
    }
    return positive_nums;
}

int main(){
    // Add your own test cases here
    assert(get_positive({}) == std::vector<float>{});
    assert(get_positive({-1, 2, -3, 4, -5}) == std::vector<float>{2, 4});
    assert(get_positive({1, 2, 3, 4, 5}) == std::vector<float>{1, 2, 3, 4, 5});
    assert(get_positive({-1, -2, -3, -4, -5}) == std::vector<float>{});
    assert(get_positive({0, 0, 0, 0, 0}) == std::vector<float>{});
    return 0;
}