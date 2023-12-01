#include <vector>
#include <string>
#include <cassert>
#include <algorithm>
#include <map>
#include <iostream>

using namespace std;

bool issame(const vector<string>& v1, const vector<string>& v2){
    if(v1.size() != v2.size()){
        return false;
    }
    for(size_t i=0; i<v1.size(); i++){
        if(v1[i] != v2[i]){
            return false;
        }
    }
    return true;
}

vector<string> by_length(vector<int> arr){
    vector<string> result;

    // Sort the integers between 1 and 9
    vector<int> sorted_arr;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] >= 1 && arr[i] <= 9) {
            sorted_arr.push_back(arr[i]);
        }
    }
    sort(sorted_arr.begin(), sorted_arr.end());

    // Reverse the sorted array and replace each digit by its corresponding name
    map<int, string> digit_names = {
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
    for (int i = sorted_arr.size() - 1; i >= 0; i--) {
        result.push_back(digit_names[sorted_arr[i]]);
    }

    return result;
}

int main2() {
    assert(issame(by_length({9, 4, 8}), {"Nine", "Eight", "Four"}));
    // Add more test cases if needed

    cout << "Tests passed!" << endl;

    return 0;
}