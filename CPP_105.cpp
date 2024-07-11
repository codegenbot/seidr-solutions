```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

bool issame(int a, int b) {
    vector<string> result;
    if (a == b) {
        return true;
    } else {
        return false;
    }
}

vector<string> by_length(vector<int> arr) {
    vector<int> numbers;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            numbers.push_back(num);
        }
    }
    
    sort(numbers.begin(), numbers.end());
    
    reverse(numbers.begin(), numbers.end());
    
    vector<string> result;
    for (int num : numbers) {
        switch (num) {
            case 1:
                result.push_back("One");
                break;
            case 2:
                result.push_back("Two");
                break;
            case 3:
                result.push_back("Three");
                break;
            case 4:
                result.push_back("Four");
                break;
            case 5:
                result.push_back("Five");
                break;
            case 6:
                result.push_back("Six");
                break;
            case 7:
                result.push_back("Seven");
                break;
            case 8:
                result.push_back("Eight");
                break;
            case 9:
                result.push_back("Nine");
                break;
        }
    }
    
    return result;
}

int main() {
    int n; 
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    vector<int> arr(n);

    for(int i =0 ;i<n;i++){
        cin>>arr[i];
    }

    cout<<"The numbers are : "<<endl;
    for(int i = 0; i <n; i++) {
        cout<<arr[i]<<" ";
    }cout<<endl;

    vector<string> res = by_length(arr);
    cout << "Output: ";
    for (string s : res) {
        cout << s << " ";
    }
    return 0;
}