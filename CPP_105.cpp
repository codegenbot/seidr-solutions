#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(const vector<int>& arr1, const vector<int>& arr2){
    return arr1 == arr2;
}

vector<string> by_length(vector<int> arr){
    vector<int> sorted_arr;
    vector<string> result;
    map<int, string> num_to_name = {
        {1, "One"},
        {2, "Two"},
        {3, "Three"},
        {4, "Four"},
        {5, "Five"},
        {6, "Six"},
        {7, "Seven"},
        {8, "Eight"},
        {9, "Nine"}
    };

    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            sorted_arr.push_back(num);
        }
    }

    sort(sorted_arr.begin(), sorted_arr.end());

    reverse(sorted_arr.begin(), sorted_arr.end());

    for (int num : sorted_arr) {
        result.push_back(num_to_name[num]);
    }

    return result;
}

int main() {
    vector<int> input = {9, 3, 7, 2, 5};
    vector<string> output = by_length(input);

    for (const string& str : output) {
        cout << str << " ";
    }

    return 0;
}