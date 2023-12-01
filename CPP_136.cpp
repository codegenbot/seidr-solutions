#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> largest_smallest_integers(vector<int> lst) {
    int largestNegative = 0;
    int smallestPositive = 0;

    for(int num : lst) {
        if(num < 0 && num < largestNegative) {
            largestNegative = num;
        }
        else if(num > 0 && (num < smallestPositive || smallestPositive == 0)) {
            smallestPositive = num;
        }
    }

    return {largestNegative, smallestPositive};
}

int main() {
    assert(issame(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), {-3, 1}));

    cout << "Test cases passed!" << endl;

    return 0;
}