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
    int n;
    vector<int> numbers;
    cout << "Enter number of elements: ";
    cin >> n;

    for(int i=0; i<n; i++){
        cout << "Enter element: ";
        int num;
        cin >> num;
        numbers.push_back(num);
    }

    int result = specialFilter(numbers);

    cout << "Number of integers that meet the condition is: " << result << endl;

    return 0;
}