#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int prod_signs(vector<int> arr){
    if(arr.empty()){
        return -32768;
    }
    
    int product = 1;
    int sum = 0;
    
    for(int i=0; i<arr.size(); i++){
        product *= arr[i] >= 0 ? 1 : -1;
        sum += abs(arr[i]);
    }
    
    return product * sum;
}

int main() {
    // Test cases
    cout << prod_signs({-1, 1, 1, 0}) << endl;
    cout << prod_signs({-1, -1, -1}) << endl;
    cout << prod_signs({5, 5, -5}) << endl;

    return 0;
}