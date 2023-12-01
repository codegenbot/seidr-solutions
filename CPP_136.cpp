#include <iostream>
#include <vector>
#include <climits>

using namespace std;

vector<int> largest_smallest_integers(vector<int> lst);

int main() {
    assert(largest_smallest_integers({-6, -4, -4, -3, -100, 1}) == vector<int>({-3, 1}));
    return 0;
}

vector<int> largest_smallest_integers(vector<int> lst) {
    vector<int> result(2, 0);
    int largestNegative = INT_MIN;
    int smallestPositive = INT_MAX;
    
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] < 0 && lst[i] > largestNegative) {
            largestNegative = lst[i];
        }
        if (lst[i] > 0 && lst[i] < smallestPositive) {
            smallestPositive = lst[i];
        }
    }
    
    result[0] = largestNegative == INT_MIN ? 0 : largestNegative;
    result[1] = smallestPositive == INT_MAX ? 0 : smallestPositive;
    
    return result;
}