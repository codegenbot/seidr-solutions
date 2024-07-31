#include <vector>
#include <climits>
#include <cassert>

using namespace std;

bool areSame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> largest_smallest_integers(vector<int> lst){
    int largest_negative = INT_MIN;
    int smallest_positive = INT_MAX;

    for(int num : lst){
        if(num < 0 && num > largest_negative){
            largest_negative = num;
        }
        if(num > 0 && num < smallest_positive){
            smallest_positive = num;
        }
    }

    return {largest_negative, smallest_positive};
}

int main(){
    vector<int> input = {3, -2, 5, -7, 1};
    vector<int> output = largest_smallest_integers(input);

    vector<int> expected_output = {-2, 1};

    assert(areSame(output, expected_output));

    assert(areSame(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), vector<int>{-3, 1}));

    return 0;
}