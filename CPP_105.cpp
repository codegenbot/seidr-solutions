```
#include <algorithm>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

vector<string> by_length(vector<int> arr) {
    vector<string> nums;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            string str = to_string(num);
            if (str == "1") str = "One";
            else if (str == "2") str = "Two";
            else if (str == "3") str = "Three";
            else if (str == "4") str = "Four";
            else if (str == "5") str = "Five";
            else if (str == "6") str = "Six";
            else if (str == "7") str = "Seven";
            else if (str == "8") str = "Eight";
            else if (str == "9") str = "Nine";
            nums.push_back(str);
        }
    }

    sort(nums.begin(), nums.end());
    reverse(nums.begin(), nums.end());

    return nums;
}

int main() {
    int n;
    cout << "Enter the number of integers: ";
    cin >> n;
    vector<int> arr;
    for(int i=0; i<n; i++) {
        int num;
        cout << "Enter integer " << i+1 << ": ";
        cin >> num;
        arr.push_back(num);
    }
    vector<string> output = by_length(arr);
    cout << "The numbers in the order of their lengths are: ";
    for (string str : output) {
        cout << str << " ";
    }
    cout << "\n";
}