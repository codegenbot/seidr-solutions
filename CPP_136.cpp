#include <iostream>
#include <vector>
#include <cassert>
#include <climits>

using namespace std;

vector<int> largestAndSmallestIntegers(vector<int> lst){
    vector<int> result = {0, 0};
    int largestNegative = INT_MIN;
    int smallestPositive = INT_MAX;

    for(int num : lst){
        if(num < 0 && num > largestNegative){
            largestNegative = num;
        }
        if(num > 0 && num < smallestPositive){
            smallestPositive = num;
        }
    }

    result[0] = largestNegative;
    result[1] = smallestPositive;

    return result;
}

bool areEqual(vector<int> a, vector<int> b){
    return a == b;
}

int main(){
    assert(areEqual(largestAndSmallestIntegers({-6, -4, -4, -3, -100, 1}), {-3, 1}));

    return 0;
}