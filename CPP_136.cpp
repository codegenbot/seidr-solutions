#include <iostream>
#include <vector>
#include <cassert>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> largest_smallest_integers(vector<int> lst){
    int largest_negative = 0;
    int smallest_positive = 0;
    
    for(int num : lst){
        if(num < 0 && num < largest_negative){
            largest_negative = num;
        }
        if(num > 0 && (num < smallest_positive || smallest_positive == 0)){
            smallest_positive = num;
        }
    }
    
    return {largest_negative, smallest_positive};
}

int main() {
    vector<int> lst = {1, -5, 7, -8, 10};
    
    vector<int> result = largest_smallest_integers(lst);
    
    vector<int> expected_result = {-8, 1};
    
    assert(issame(result, expected_result));
    
    return 0;
}