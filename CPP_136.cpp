#include <vector>
#include <cassert>

using namespace std; // Add this line

vector<int> largest_smallest_integers(vector<int> lst); // Forward declaration

bool issame(vector<int> a, vector<int> b); // Fix function signature

int main() {
    assert(issame(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), {-3, 1}));
    return 0;
}

vector<int> largest_smallest_integers(vector<int> lst){
    int largest_negative = 0, smallest_positive = 0;
    
    for (int num : lst) {
        if (num < 0 && num < largest_negative) {
            largest_negative = num;
        }
        if (num > 0 && (num < smallest_positive || smallest_positive == 0)) {
            smallest_positive = num;
        }
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