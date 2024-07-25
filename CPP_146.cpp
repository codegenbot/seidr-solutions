#include <vector>

#include <iostream>
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
    vector<int> numbers = {12,15,17,20};
    cout << "Special numbers: " << specialFilter(numbers) << endl;
    return 0;
}