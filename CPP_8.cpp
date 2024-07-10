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

vector<int> nums = {2, 5, 3};

vector<int> result = sum_product(nums);

assert(result == vector<int>{10, 30});

cout << "Sum: " << result[0] << endl;
cout << "Product: " << result[1] << endl;