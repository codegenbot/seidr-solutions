#include <vector>
#include <climits>
#include <cassert>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> largest_smallest_integer(const vector<int>& lst) {
    vector<int> result = {0, 0};
    int max_neg = INT_MIN;
    int min_pos = INT_MAX;
    
    for(int num : lst){
        if(num < 0 && num > max_neg){
            max_neg = num;
        } else if(num > 0 && num < min_pos){
            min_pos = num;
        }
    }
    
    result[0] = max_neg == INT_MIN ? 0 : max_neg;
    result[1] = min_pos == INT_MAX ? 0 : min_pos;
    
    return result;
}

int main() {
    vector<int> input = {5, -2, 9, -7, 3};
    vector<int> expected_output = { -2, 3 };
    
    vector<int> output = largest_smallest_integer(input);
    
    assert(issame(output, expected_output));

    return 0;
}