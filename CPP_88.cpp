#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> sort_array(vector<int> array) {
    vector<int> sorted_array = array;
    if (sorted_array.empty()) {
        return sorted_array;
    }
    int sum = sorted_array[0] + sorted_array[sorted_array.size() - 1];
    if (sum % 2 == 0) {
        sort(sorted_array.begin(), sorted_array.end(), greater<int>());
    } else {
        sort(sorted_array.begin(), sorted_array.end());
    }
    return sorted_array;
}

bool issame(vector<int> a, vector<int> b){
    // Compare a and b
    if(a.size() != b.size()){
        return false;
    }

    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }

    return true;
}

int main() {
    assert(issame(sort_array({21, 14, 23, 11}), {23, 21, 14, 11}));
    // Other test cases
    return 0;
}