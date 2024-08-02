#include <vector>
#include <climits>
#include <cassert>

using namespace std;

vector<int> largest_smallest_integers(vector<int> lst);

bool issame(vector<int> a, vector<int> b);

int main() {
    assert(issame(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), {-3, 1}));
    return 0;
}

vector<int> largest_smallest_integers(vector<int> lst){
    int largest_negative = INT_MIN, smallest_positive = INT_MAX;
    
    for (int num : lst) {
        if (num < 0 && num > largest_negative) {
            largest_negative = num;
        }
        if (num > 0 && (num < smallest_positive)) {
            smallest_positive = num;
        }
    }
    
    if (largest_negative == INT_MIN) {
        largest_negative = 0;
    }
    if (smallest_positive == INT_MAX) {
        smallest_positive = 0;
    }
    
    return {largest_negative, smallest_positive};
}

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    
    for(int i=0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    
    return true;
}