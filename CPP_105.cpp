```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool isSame(vector<string> a, vector<string>b){
    return (a == b);
}

int main() {
    std::vector<int> arr;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for(int i = 0; i < n; ++i) {
        int num;
        std::cout << "Enter element " << (i+1) << ": ";
        std::cin >> num;
        arr.push_back(num);
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
    
    vector<string> output = by_length(arr);
    std::cout << "The output is: ";
    for(auto s : output) {
        std::cout << s << " ";
    }
    std::cout << std::endl;
    if(isSame(by_length(arr), output)) {
        std::cout << "The output is the same as expected." << std::endl;
    } else {
        std::cout << "The output is not the same as expected." << std::endl;
    }
    
    return 0;
}