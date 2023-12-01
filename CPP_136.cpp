#include <iostream>
#include <vector>
#include <cassert>
#include <climits>

bool issame(std::vector<int> a, std::vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

std::vector<int> largest_smallest_integers(std::vector<int> lst){
    int largestNegative = INT_MIN;
    int smallestPositive = INT_MAX;
    
    for(int i=0; i<lst.size(); i++){
        if(lst[i] < 0 && lst[i] > largestNegative){
            largestNegative = lst[i];
        }
        if(lst[i] > 0 && lst[i] < smallestPositive){
            smallestPositive = lst[i];
        }
    }
    
    return {largestNegative, smallestPositive};
}

int main() {
    assert (issame(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), std::vector<int>{-100, 1}));
    assert (issame(largest_smallest_integers({5, 3, -1, 7, 2}), std::vector<int>{-1, 2}));
    assert (issame(largest_smallest_integers({0, 0, 0, 0, 0}), std::vector<int>{0, 0}));
    assert (issame(largest_smallest_integers({-1, -2, -3, -4, -5}), std::vector<int>{-1, -5}));
    assert (issame(largest_smallest_integers({1, 2, 3, 4, 5}), std::vector<int>{1, 2}));
    
    return 0;
}