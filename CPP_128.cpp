#include <vector>
#include <iostream>
using namespace std;

int prod_signs(vector<int> arr){
    if(arr.empty()){
        return -32768;
    }
    int sign = 1;
    int product = 1;
    int sum = 0;
    
    for(int i=0; i<arr.size(); i++){
        if(arr[i] > 0){
            sign *= 1;
        }
        else if(arr[i] < 0){
            sign *= -1;
        }
        sum += abs(arr[i]);
    }
    
    return sign * sum * product;
}

int main() {
    // Test cases
    cout << prod_signs({-1, 1, 1, 0}) << endl;
    cout << prod_signs({-1, -1, -1}) << endl;
    cout << prod_signs({-1, 1, -1}) << endl;
    return 0;
}