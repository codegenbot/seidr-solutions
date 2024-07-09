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
    vector<int> numbers = {12, 15, 21, 35, 40};
    int result = specialFilter(numbers);
    cout << "The number of integers that meet the condition is: " << result << endl;
    return 0;
}