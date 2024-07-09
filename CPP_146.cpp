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
    vector<int> input;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        cout << "Enter element " << (i+1) << ": ";
        cin >> input.push_back();
    }
    cout << "The count is: " << specialFilter(input);
    return 0;
}