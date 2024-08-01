#include <iostream>
#include <vector>
#include <algorithm>

bool isSame(vector<string> a, vector<string>b){
    return (a == b);
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        std::cout << "Enter element " << (i+1) << ": ";
        std::cin >> arr[i];
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
    bool same = isSame(output, {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"});

    if(same) {
        std::cout << "The numbers are in the order of their lengths." << std::endl;
    } else {
        std::cout << "The numbers are not in the order of their lengths." << std::endl;
    }

    return 0;
}