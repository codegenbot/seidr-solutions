#include <algorithm>
#include <cassert>
#include <vector>

std::vector<float> sort_even(std::vector<float> l);

bool is_same(float a, float b){
    return fabs(a - b) < 1e-9;
}

std::vector<float> sort_even(std::vector<float> l){
    std::vector<float> result = l;
    std::vector<float> even;
    
    for(int i=0; i<l.size(); i+=2){
        even.push_back(l[i]);
    }
    
    std::sort(even.begin(), even.end());
    
    for(int i=0, j=0; i<l.size(); i+=2, j++){
        result[i] = even[j];
    }
    
    return result;
}

int main() {
    std::vector<float> l = {4.5, 2.5, 3.5, 1.5, 6.5};
    std::vector<float> sorted_even = sort_even(l);

    assert(is_same(sorted_even[0], 1.5));
    assert(is_same(sorted_even[1], 2.5));
    assert(is_same(sorted_even[2], 6.5));
    
    return 0;
}