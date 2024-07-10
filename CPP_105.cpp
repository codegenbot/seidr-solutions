```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<string> a,vector<string>b){
    return (a == b);
}

int main() {
    vector<int> arr = {1,2,3,4,5};
    vector<string> result = by_length(arr);

    if(issame(result,{"One","Two","Three"})){
        std::cout << "The output is as expected.\n";
    } else{
        std::cout << "The output is not as expected.\n";
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
        string name = "";
        switch (num) {
            case 1:
                name = "One";
                break;
            case 2:
                name = "Two";
                break;
            case 3:
                name = "Three";
                break;
            case 4:
                name = "Four";
                break;
            case 5:
                name = "Five";
                break;
            case 6:
                name = "Six";
                break;
            case 7:
                name = "Seven";
                break;
            case 8:
                name = "Eight";
                break;
            case 9:
                name = "Nine";
                break;
        }
        result.push_back(name);
    }

    return result;
}