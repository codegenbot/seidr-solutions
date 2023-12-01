#include <vector>

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
    // Test the functionality of the prod_signs function
    vector<int> test1 = {1, 2, 3};
    int result1 = prod_signs(test1);
    // Expected result1: (1 + 2 + 3) * 1 = 6
    vector<int> test2 = {-1, 2, -3};
    int result2 = prod_signs(test2);
    // Expected result2: (1 + 2 + 3) * -1 = -6
    vector<int> test3 = {};
    int result3 = prod_signs(test3);
    // Expected result3: -32768
    return 0;
}