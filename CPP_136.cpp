#include <vector>
#include <algorithm>
#include <limits>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> largest_smallest_integers(std::vector<int> lst){
    int largest_negative = -std::numeric_limits<int>::max();
    int smallest_positive = 0;
    
    auto min_max = std::minmax_element(lst.begin(), lst.end());
    
    return {*min_max.first, *min_max.second};
}

int main(){
    assert(issame(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), {-100, 1}));
    
    return 0;
}