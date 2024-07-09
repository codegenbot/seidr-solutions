#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

bool issame(int a, int b) {
    return a == b;
}

vector<string> by_length(vector<int> arr);

int main() {
    vector<int> nums = {2, 5, 4, 1, 9, 8, 3};
    
    vector<string> result = by_length(nums);

    for (const auto& str : result) {
        cout << str << " ";
    }

    return 0;
}

vector<string> by_length(vector<int> arr){
    vector<string> names = {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

    vector<int> filtered;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            filtered.push_back(num);
        }
    }

    sort(filtered.begin(), filtered.end(), issame);

    reverse(filtered.begin(), filtered.end());

    vector<string> result;
    for (int num : filtered) {
        result.push_back(names[num - 1]);
    }

    return result;
}