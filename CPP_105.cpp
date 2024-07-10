#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

bool issame(vector<string> a, vector<string> b);

vector<string> by_length(vector<int> arr);

int main() {
    vector<int> input = {9, 3, 7, 2, 5, 4, 1, 6, 8};
    vector<string> result = by_length(input);
    for (string str : result) {
        cout << str << " ";
    }
    cout << endl;
    return 0;
}

vector<string> by_length(vector<int> arr){
    vector<string> result;
    map<int, string> num_to_name = {
        {1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"},
        {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}
    };

    vector<int> valid_nums;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            valid_nums.push_back(num);
        }
    }

    sort(valid_nums.begin(), valid_nums.end());
    reverse(valid_nums.begin(), valid_nums.end());

    for (int num : valid_nums) {
        result.push_back(num_to_name[num]);
    }

    return result;
}