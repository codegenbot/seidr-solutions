#include<stdio.h>
#include<vector>
using namespace std;
vector<int> largest_smallest_integers(vector<int> lst){
    vector<int> result(2);
    int max_negative = 0;
    int min_positive = INT_MAX;

    for(int i : lst){
        if(i < 0 && i > max_negative){
            max_negative = i;
        }
        else if(i > 0 && i < min_positive){
            min_positive = i;
        }
    }

    result[0] = (max_negative == 0) ? 0 : max_negative;
    result[1] = (min_positive == INT_MAX) ? 0 : min_positive;

    return result;
}