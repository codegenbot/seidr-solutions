```cpp
#ifndef __cpp_initializer_lists 201304
#error This program requires C++11 support to use initializer_list.
#endif

#include <vector>
#include <iostream>

using namespace std;

vector<int> calculateLeaders(vector<int> arr) {
    int n = arr.size();
    vector<int> res;
    
    int maxSoFar = 0; 

    for(int i=n-1; i>=0; i--){
        if(arr[i] >= maxSoFar){
            res.push_back(arr[i]);
            maxSoFar = arr[i];
        }
    }
    
    return res;
}

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    vector<int> leadersVec = calculateLeaders(arr);
    for(int i:leadersVec){
        cout << i << " ";
    }
    return 0;
}