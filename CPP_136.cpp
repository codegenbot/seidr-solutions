#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<int> largest_smallest_integers(vector<int> lst);

bool issame(vector<int> a, vector<int> b);

int main() {
    vector<int> lst = {-3, 5, 2, -8, 4, 7};

    vector<int> result = largest_smallest_integers(lst);

    vector<int> expected = {-8, 2};

    assert(issame(result, expected));

    return 0;
}

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