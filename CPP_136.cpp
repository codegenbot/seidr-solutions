#include <vector>

bool issame(vector<int> a, vector<int> b) {
    return a[0] == b[0] && a[1] == b[1];
}

vector<int> largest_smallest_integers(vector<int> lst) {
    vector<int> result = {INT_MIN, INT_MAX};
    
    for (int num : lst) {
        if (num < 0 && num > result[0]) {
            result[0] = num;
        } else if (num > 0 && num < result[1]) {
            result[1] = num;
        }
    }
    
    return result;
}

int main() {
    vector<int> input = {3, -2, 7, -5, -1, 0};
    vector<int> output = largest_smallest_integers(input);
    
    assert(issame(output, {-1, 0}));
    
    return 0;
}