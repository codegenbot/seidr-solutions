#include <vector>
#include <algorithm>
#include <string>
#include <cassert>

bool issame(int a, int b){
    return a == b;
}

vector<string> by_length(const vector<int>& arr){
    vector<string> names = {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    vector<int> filtered_arr;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            filtered_arr.push_back(num);
        }
    }
    sort(filtered_arr.begin(), filtered_arr.end());
    reverse(filtered_arr.begin(), filtered_arr.end());
    vector<string> result;
    for (int num : filtered_arr) {
        result.push_back(names[num - 1]);
    }
    return result;
} 