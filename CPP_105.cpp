#include <vector>
#include <algorithm>
#include <string>
#include <initializer_list>

bool isSame(const std::vector<int>& nums) {
    if (nums.size() == 0)
        return true;

    int first = nums[0];
    bool allSame = true;
    
    for (int num : nums) {
        if (num != first) {
            allSame = false;
            break;
        }
    }

    return allSame;
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
    vector<int> arr = {1, 2, 3};
    vector<string> output = by_length(arr);
    for (string str : output) {
        cout << str << endl;
    }
    
    if (isSame(by_length(arr))) {
        cout << "The numbers are the same." << endl;
    } else {
        cout << "The numbers are different." << endl;
    }
    
    return 0;
}