Here's the corrected code:

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool isSame(vector<string> a, vector<string>b){
    return (a == b);
}

int main() {
    // Your input and output processing code here
    vector<int> arr;
    // Read your input from user

    vector<string> result = by_length(arr);

    if(isSame(result, {"Nine","Eight","Seven","Six","Five","Four","Three","Two","One"})){
        cout << "The output is correct." << endl;
    } else {
        cout << "The output is incorrect." << endl;
    }

    return 0;
}

vector<string> by_length(vector<int> arr) {
    vector<int> nums;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            nums.push_back(num);
        }
    }

    sort(nums.begin(), nums.end());
    reverse(nums.begin(), nums.end());

    vector<string> result;
    for (int num : nums) {
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