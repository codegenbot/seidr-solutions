#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<int> largest_smallest_integers(vector<int> lst){
    vector<int> result(2, 0); // initialize the result vector with 0
    
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

bool issame(vector<int> a, vector<int> b){
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

int main(){
    assert(issame(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), {-100, 1}));
    assert(issame(largest_smallest_integers({-1, -2, -3, -4}), {-1, 0}));
    assert(issame(largest_smallest_integers({1, 2, 3, 4}), {0, 1}));
    
    cout << "All test cases passed!" << endl;
    
    return 0;
}