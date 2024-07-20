#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <cassert>

bool issame(vector<string> a, vector<string> b){
    // Function implementation
}

vector<string> by_length(vector<int> arr);

int main() {
    vector<int> numbers = {9, 5, 2, 7, 3, 1, 8, 4, 6};
    vector<string> result = by_length(numbers);
    for (const string& word : result) {
        cout << word << " ";
    }
    return 0;
}

vector<string> by_length(vector<int> arr){
    vector<string> result;
    vector<int> filtered_arr;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            filtered_arr.push_back(num);
        }
    }
    sort(filtered_arr.begin(), filtered_arr.end());
    reverse(filtered_arr.begin(), filtered_arr.end());
    map<int, string> num_to_word = {
        {1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"},
        {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}
    };
    for (int num : filtered_arr) {
        result.push_back(num_to_word[num]);
    }
    return result;
}