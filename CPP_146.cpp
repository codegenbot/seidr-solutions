```cpp
#include <iostream>
#include <vector>

using namespace std;

int specialFilter(vector<int> nums){
    int count = 0;
    for(int num : nums){
        if(num > 10 && (num % 10) % 2 != 0 && (num / 10) % 10 % 2 != 0){
            count++;
        }
    }
    return count;
}

int main(){
    assert(specialFilter({}) == 0); 
    int n;
    cout << "Enter the number of integers: ";
    cin >> n;

    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cout << "Enter integer #"<<(i+1)<<":";
        cin >> nums[i];
    }

    int output = specialFilter(nums);

    cout << "The number of integers that satisfy the condition is: "<<output<<endl;
    
    return 0;
}