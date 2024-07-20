#include <string>
#include <vector>
#include <algorithm>

bool issame(vector<string> a, vector<string>b);

vector<string> by_length(vector<int> arr) {
    vector<string> nums;
    for (int i : arr) {
        if (i >= 1 && i <= 9)
            nums.push_back(to_string(i));
    }
    sort(nums.begin(), nums.end());
    reverse(nums.begin(), nums.end());
    vector<string> result;
    for (string num : nums) {
        string str = "";
        switch (stoi(num)) {
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

int main() {
    assert (issame(by_length({9, 4, 8}) , {"Nine", "Eight", "Four"}));
    return 0;
}