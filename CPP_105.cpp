#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

vector<string> by_length(vector<int> arr){
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

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

int main(){
    assert(issame(by_length({9, 4, 8}), {"Nine", "Eight", "Four"}));
    
    return 0;
}