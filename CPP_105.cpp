#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> by_length(vector<int> arr) {
    vector<int> nums;
    for (int num : arr) {
        if (num >= 1 && num <= 9)
            nums.push_back(num);
    }
    
    sort(nums.begin(), nums.end());
    reverse(nums.begin(), nums.end());

    vector<string> result;
    for (int num : nums) {
        string s = "";
        switch (num) {
            case 1: s = "One"; break;
            case 2: s = "Two"; break;
            case 3: s = "Three"; break;
            case 4: s = "Four"; break;
            case 5: s = "Five"; break;
            case 6: s = "Six"; break;
            case 7: s = "Seven"; break;
            case 8: s = "Eight"; break;
            case 9: s = "Nine"; break;
        }
        result.push_back(s);
    }

    return result;
}

int main() {
    vector<int> arr1 = {2, 1, 1, 4, 5, 8, 2, 3};
    vector<string> result1 = by_length(arr1);
    for (string s : result1) {
        cout << s << endl;
    }

    vector<int> arr2 = {};
    vector<string> result2 = by_length(arr2);
    if (result2.empty()) {
        cout << "Empty vector" << endl;
    } else {
        for (string s : result2) {
            cout << s << endl;
        }
    }

    vector<int> arr3 = {1, -1, 55};
    vector<string> result3 = by_length(arr3);
    for (string s : result3) {
        cout << s << endl;
    }

    return 0;
}