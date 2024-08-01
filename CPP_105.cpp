#include <iostream>
#include <vector>
#include <algorithm>

bool isSame(vector<string> a, vector<string>b){
    return (a == b);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> arr(n);

    for(int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    std::vector<string> result = by_length(arr);

    return 0;
}

std::vector<string> by_length(std::vector<int> arr) {
    std::vector<int> nums;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            nums.push_back(num);
        }
    }

    std::sort(nums.begin(), nums.end());
    std::reverse(nums.begin(), nums.end());

    std::vector<string> result;
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