#include <vector>
#include <climits>

bool issame(vector<int> a, vector<int> b);

bool issame(vector<int> a, vector<int> b){
    return a[0] == b[0] && a[1] == b[1];
}

vector<int> largest_smallest_integers(vector<int> lst){
    int largest_neg = INT_MIN, smallest_pos = INT_MAX;
    for(int num : lst){
        if(num < 0 && num > largest_neg){
            largest_neg = num;
        }
        if(num > 0 && num < smallest_pos){
            smallest_pos = num;
        }
    }
    return {largest_neg, smallest_pos};
}

assert(issame(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), {-3, 1});