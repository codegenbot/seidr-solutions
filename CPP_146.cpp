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
    for(int i = 1; i <= n; i++){
        cout << "Enter element " << i << ": ";
        int num;
        cin >> num;
        input.push_back(num);
    }
    cout << "Special Filter count: " << specialFilter(input) << endl;
    return 0;
}