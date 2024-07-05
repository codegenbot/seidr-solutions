#include <vector>
#include <limits>
#include <cassert>

using namespace std;

vector<int> largest_smallest_integers(vector<int> lst){
    int largest_negative = numeric_limits<int>::min();
    int smallest_positive = numeric_limits<int>::max();
    bool has_negative = false, has_positive = false;
    
    for(int num : lst){
        if(num < 0){
            has_negative = true;
            if(num > largest_negative){
                largest_negative = num;
            }
        }
        if(num > 0){
            has_positive = true;
            if(num < smallest_positive){
                smallest_positive = num;
            }
        }
    }

    return {has_negative ? largest_negative : 0, has_positive ? smallest_positive : 0};
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), {-3, 1}));
    assert(issame(largest_smallest_integers({0, -1, 2, -8, 3, -5}), {-1, 2}));
    assert(issame(largest_smallest_integers({5, 3, 1, 7, 9}), {0, 1}));
    assert(issame(largest_smallest_integers({-7, -3, -5, -2}), {-2, 0}));
    return 0;
}