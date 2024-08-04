#include <vector>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> largest_smallest_integers(vector<int> lst){
    int largest_negative = 0;
    int smallest_positive = 0;
    
    bool largest_negative_set = false;
    bool smallest_positive_set = false;
    
    for (int num : lst) {
        if (num < 0 && (!largest_negative_set || num > largest_negative)) {
            largest_negative = num;
            largest_negative_set = true;
        } else if (num > 0 && (!smallest_positive_set || num < smallest_positive)) {
            smallest_positive = num;
            smallest_positive_set = true;
        }
    }
    
    return {largest_negative, smallest_positive};
}

int main(){
    vector<int> input = {-3, 5, -2, 7, 1};
    vector<int> expected_output = {-3, 1};
    
    assert(issame(largest_smallest_integers(input), expected_output));
    
    return 0;
}