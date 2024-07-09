```cpp
bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> by_length(vector<int> arr) {
    vector<vector<string>> result;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            vector<string> numbers;
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
            numbers.push_back(name);
            for (int i = 0; i < num - 1; i++) {
                if (i == 0) {
                    numbers.push_back("Zero");
                } else {
                    numbers.push_back(name);
                }
            }
            result.push_back(numbers);
        }
    }

    vector<string> final_result;
    for (vector<string> nums : result) {
        bool is_same = true;
        string first_name = nums[0];
        for (string num : nums) {
            if (!issame(vector<string>{first_name}, vector<string>{num})) {
                is_same = false;
                break;
            }
        }
        if (is_same) {
            final_result.push_back("Same");
        } else {
            final_result.push_back(strcat_join(nums, " "));
        }
    }

    return final_result;
}

#include <algorithm>
#include <vector>
#include <string>
#include <cctype>

std::string strcat_join(const std::vector<std::string>& strings, const std::string& separator) {
    std::string result = "";
    for (const auto& str : strings) {
        if (!result.empty()) {
            result += separator;
        }
        for (char c : str) {
            result += c;
        }
    }
    return result;
}