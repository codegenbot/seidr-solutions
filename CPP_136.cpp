#include <vector>
#include <climits>
#include <cassert>

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

vector<int> largest_smallest_integer(vector<int> lst){
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
    vector<int> input = {4, -2, 7, -1, 8, -5};
    vector<int> output = largest_smallest_integer(input);
    
    vector<int> expected_output = {-1, 4};

    assert(issame(output, expected_output));

    return 0;
}