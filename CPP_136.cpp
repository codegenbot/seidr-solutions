#include <vector>
#include <climits>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> largest_smallest_integers(std::vector<int> lst){
    std::vector<int> result = {INT_MIN, INT_MAX};
    int largest_negative = INT_MIN;
    int smallest_positive = INT_MAX;
    
    for (int num : lst) {
        if (num < 0 && num > largest_negative) {
            largest_negative = num;
        }
        if (num > 0 && (num < smallest_positive)) {
            smallest_positive = num;
        }
    }
    
    result[0] = largest_negative;
    result[1] = smallest_positive;
    
    return result;
}

int main() {
    // Add your test cases here
    assert(issame(largest_smallest_integers({-10, 5, 8, -3, 0}), {-3, 5}));
    assert(issame(largest_smallest_integers({-1, -3, -5, -8}), {-1, 0}));
}