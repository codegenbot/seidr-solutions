#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>

using namespace std;

vector<string> by_length(vector<int> arr){
    vector<string> result;
    map<int, string> numToString = {
        {1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"},
        {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}
    };

    vector<int> sortedArr;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            sortedArr.push_back(num);
        }
    }

    sort(sortedArr.begin(), sortedArr.end(), greater<int>());

    for (int num : sortedArr) {
        result.push_back(numToString[num]);
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