#include <iostream>
#include <vector>
#include <climits>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b);

vector<int> largest_smallest_integers(vector<int> lst){
    vector<int> result(2, 0);
    int maxNegative = INT_MIN;
    int minPositive = INT_MAX;
    
    for(int num : lst){
        if(num < 0 && num > maxNegative){
            maxNegative = num;
        }
        if(num > 0 && num < minPositive){
            minPositive = num;
        }
    }
    
    result[0] = maxNegative == INT_MIN ? 0 : maxNegative;
    result[1] = minPositive == INT_MAX ? 0 : minPositive;
    
    return result;
}

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

int main(){
    assert(issame(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), {-3, 1}));
    
    return 0;
}