#include <vector>
#include <iostream>
#include <limits>
#include <cassert>

using namespace std;

vector<int> pluck(vector<int> arr){
    vector<int> result;
    int smallestEven = numeric_limits<int>::max();
    int smallestIndex = -1;
    
    for(int i=0; i<arr.size(); i++){
        if(arr[i] % 2 == 0 && arr[i] < smallestEven){
            smallestEven = arr[i];
            smallestIndex = i;
        }
    }
    
    if(smallestIndex != -1){
        result.push_back(smallestEven);
        result.push_back(smallestIndex);
    }
    
    return result;
}

int main() {
    assert(pluck({7, 9, 7, 1}) == vector<int>{});
    assert(pluck({7, 6, 5, 1}) == vector<int>{6, 1});
    assert(pluck({2, 4, 6, 8}) == vector<int>{2, 0});
    
    cout << "All test cases passed!\n";
    
    return 0;
}