#include <vector>
#include <cassert>

bool issame(vector<int> a, vector<int> b){
    return a[0] == b[0] && a[1] == b[1];
}

vector<int> largest_smallest_integers(vector<int> lst){
    vector<int> result(2, 0);
    int largestNegative = 0;
    int smallestPositive = 0;
    for(int num : lst){
        if(num < 0 && num < largestNegative){
            largestNegative = num;
        }
        if(num > 0 && (num < smallestPositive || smallestPositive == 0)){
            smallestPositive = num;
        }
    }
    result[0] = largestNegative;
    result[1] = smallestPositive;
    return result;
}

int main(){
    assert(issame(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), {-3, 1}));
    return 0;
}