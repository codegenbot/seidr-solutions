#include <vector>
#include <climits>

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> largest_smallest_integers(vector<int> lst){
    int largest_negative = INT_MIN, smallest_positive = INT_MAX;
    for (int num : lst) {
        if (num < 0 && num > largest_negative) {
            largest_negative = num;
        } else if (num > 0 && (num < smallest_positive)) {
            smallest_positive = num;
        }
    }

    if (smallest_positive == INT_MAX) {
        smallest_positive = 0;
    }

    return {largest_negative, smallest_positive};
}