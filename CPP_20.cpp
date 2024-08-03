#include <vector>
#include <cassert>

std::vector<float> find_closest_elements(std::vector<float> numbers){
    std::vector<float> closest_elements;
    
    for(size_t i = 1; i < numbers.size() - 1; ++i){
        closest_elements.push_back(numbers[i]);
    }
    
    return closest_elements;
}

bool issame(std::vector<float> a, std::vector<float> b){
    return a == b;
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1});
}