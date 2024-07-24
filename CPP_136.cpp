#include <vector>
#include <iostream>
#include <climits>

vector<int> largest_smallest_integers(vector<int> lst){
    int max_negative = INT_MIN;
    int min_positive = INT_MAX;
    
    for(int num : lst){
        if(num < 0 && num > max_negative){
            max_negative = num;
        } else if(num > 0 && num < min_positive){
            min_positive = num;
        }
    }
    
    return {(max_negative == INT_MIN) ? 0 : max_negative, (min_positive == INT_MAX) ? 0 : min_positive};
}