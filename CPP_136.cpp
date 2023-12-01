#include <iostream>
#include <vector>
#include <climits>
#include <cassert>

using namespace std;

vector<int> largest_smallest_integers(vector<int> lst){
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
    
    return vector<int>{largestNegative, smallestPositive};
}

int main() {
    assert (largest_smallest_integers({-6, -4, -4, -3, -100, 1}) == vector<int>{-100, 1});
    assert (largest_smallest_integers({5, 3, -1, 7, 2}) == vector<int>{-1, 2});
    assert (largest_smallest_integers({0, 0, 0, 0, 0}) == vector<int>{0, 0});
    assert (largest_smallest_integers({-1, -2, -3, -4, -5}) == vector<int>{-1, -5});
    assert (largest_smallest_integers({1, 2, 3, 4, 5}) == vector<int>{1, 2});

    return 0;
}