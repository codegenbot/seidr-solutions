#include <algorithm>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

vector<string> by_length(vector<int> arr) {
    vector<string> nums;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            nums.push_back(to_string(num));
        }
    }

    sort(nums.begin(), nums.end());
    reverse(nums.begin(), nums.end());

    vector<string> result;
    for (string str : nums) {
        switch (stoi(str)) {
            case 1:
                str = "One";
                break;
            case 2:
                str = "Two";
                break;
            case 3:
                str = "Three";
                break;
            case 4:
                str = "Four";
                break;
            case 5:
                str = "Five";
                break;
            case 6:
                str = "Six";
                break;
            case 7:
                str = "Seven";
                break;
            case 8:
                str = "Eight";
                break;
            case 9:
                str = "Nine";
                break;
        }
        result.push_back(str);
    }

    return result;
}