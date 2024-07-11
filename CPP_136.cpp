#include <iostream>
#include <vector>
#include <climits>

using namespace std;

vector<int> largest_smallest_integers(vector<int> lst);

int main() {
    vector<int> testInput = {2, -10, 5, -3, 1, 8, -4};
    vector<int> expectedOutput = {-3, 1};
    
    vector<int> result = largest_smallest_integers(testInput);

    if(result == expectedOutput){
        cout << "Test passed!" << endl;
    }
    else{
        cout << "Test failed!" << endl;
    }

    return 0;
}

vector<int> largest_smallest_integers(vector<int> lst){
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
    
    if(largestNegative != INT_MIN){
        result[0] = largestNegative;
    }
    if(smallestPositive != INT_MAX){
        result[1] = smallestPositive;
    }
    
    return result;
}