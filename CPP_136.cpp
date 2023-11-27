#include <iostream>
#include <vector>
#include <climits>
#include <cassert>

using namespace std;

vector<int> largest_smallest_integers(vector<int> lst) {
    int largest_negative = INT_MIN;
    int smallest_positive = INT_MAX;
    
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] < 0 && lst[i] > largest_negative) {
            largest_negative = lst[i];
        }
        if (lst[i] > 0 && lst[i] < smallest_positive) {
            smallest_positive = lst[i];
        }
    }
    
    return {largest_negative, smallest_positive};
}