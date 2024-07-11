#include <vector>
#include <cassert>

using namespace std;

vector<int> largest_smallest_integers(vector<int> lst){
    int max_neg = INT_MIN, min_pos = INT_MAX;
    for(int num : lst){
        if(num < 0 && num > max_neg){
            max_neg = num;
        }
        if(num > 0 && num < min_pos){
            min_pos = num;
        }
    }
    return {max_neg, min_pos};
}

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

int main(){
    assert(issame(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), {-100, 1}));
    return 0;
}