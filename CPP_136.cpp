#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> largest_smallest_integers(vector<int> lst){
    int largest_negative = 0;
    int smallest_positive = 0;

    for(int num : lst){
        if(num < 0 && num < largest_negative){
            largest_negative = num;
        }
        else if(num > 0 && (num < smallest_positive || smallest_positive == 0)){
            smallest_positive = num;
        }
    }

    return {largest_negative, smallest_positive};
}

int main(){
    assert(issame(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), {-100, 1}));
    assert(issame(largest_smallest_integers({-1, -2, -3, -4}), {-1, -4}));
    assert(issame(largest_smallest_integers({5, 7, 2, 1}), {0, 1}));
    assert(issame(largest_smallest_integers({-1, 0, 1, 2}), {-1, 0}));

    cout << "All test cases passed!" << endl;
    return 0;
}