#include <iostream>
#include <vector>
using namespace std;

int prod_signs(vector<int> arr){
    if(arr.empty()){
        return -32768;
    }
    int product = 1;
    int sum = 0;
    for(int i=0; i<arr.size(); i++){
        sum += abs(arr[i]);
        if(arr[i] < 0){
            product *= -1;
        }
    }
    return sum * product;
}

int main() {
    // Test the prod_signs function
    vector<int> arr1 = {1, -2, 3, -4, 5};
    vector<int> arr2 = {1, 2, 3, 4, 5};
    vector<int> arr3 = {};

    cout << prod_signs(arr1) << endl;  // Output: -75
    cout << prod_signs(arr2) << endl;  // Output: 15
    cout << prod_signs(arr3) << endl;  // Output: -32768

    return 0;
}