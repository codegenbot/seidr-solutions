#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <cassert>

vector<string> by_length(const vector<int>& arr); // Forward declaration for by_length

bool issame(const vector<string>& a, const vector<string>& b); // Forward declaration for issame

vector<string> by_length(const vector<int>& arr){
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

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

int main(){
    assert(issame(by_length({9, 4, 8}), {"Nine", "Eight", "Four"}));
}