#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<int> sum_product(vector<int> nums){
    int sum = 0;
    int product = 1;
    
    for(int num : nums){
        sum += num;
        product *= num;
    }
    
    return {sum, product};
}

int main(){
    vector<int> nums;
    int n;
    cin >> n;
    
    for(int i=0; i<n; i++){
        int num;
        cin >> num;
        nums.push_back(num);
    }

    vector<int> result = sum_product(nums);

    assert(result == vector<int>{10, 10});

    cout << "Sum: " << result[0] << endl;
    cout << "Product: " << result[1] << endl;

    return 0;
}