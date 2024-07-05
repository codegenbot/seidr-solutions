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
    return 0;
}