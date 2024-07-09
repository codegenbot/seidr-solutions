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
    int input; 
    vector<int> numbers; 

    cout << "Enter number of integers to filter: ";
    cin >> input;

    for(int i = 0 ; i < input ; i++){
        cout << "Enter integer: ";
        cin >> numbers.push_back(i);
    }

    cout << "Special filtered count is: " << specialFilter(numbers) << endl;
    
}