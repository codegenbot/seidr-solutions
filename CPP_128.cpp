#include <iostream>
#include <vector>
using namespace std;

int prod_signs(vector<int> arr){
    if(arr.empty()){
        return -32768;
    }
    
    int product = 1;
    int sum = 0;
    
    for(int i = 0; i < arr.size(); i++){
        product *= arr[i] >= 0 ? 1 : -1;
        sum += abs(arr[i]);
    }
    
    return product * sum;
}

int main() {
    // Test cases
    vector<int> arr1 = {1, -2, 3, -4, 5};
    cout << prod_signs(arr1) << endl; // Output: -45
    
    vector<int> arr2 = {-1, -2, -3, -4, -5};
    cout << prod_signs(arr2) << endl; // Output: -15
    
    vector<int> arr3 = {};
    cout << prod_signs(arr3) << endl; // Output: -32768
    
    return 0;
}