#include <iostream>
#include <vector>

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
    vector<int> numbers = {11, 12, 15, 16, 20};
    cout << "Number of special integers: " << specialFilter(numbers) << endl;
    return 0;
}