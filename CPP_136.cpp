#include <vector>
#include <climits>

bool issame(vector<int> a, vector<int> b){
    return a == b;
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