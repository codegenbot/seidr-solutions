
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <cassert>

using namespace std;

vector<string> by_length(vector<string> arr){
    vector<string> result;
    map<int, string> numToString = {
        {1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"},
        {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}
    };
    
    vector<int> filtered;
    for (string num : arr) {
        if (num >= "One" && num <= "Nine") {
            filtered.push_back(stoi(num));
        }
    }
    
    sort(filtered.begin(), filtered.end(), greater<int>());
    
    for (int num : filtered) {
        result.push_back(numToString[num]);
    }
    
    return result;
}

int main(){
    assert(by_length({"Nine", "Four", "Eight"}) == by_length({"Nine", "Eight", "Four"}));
    
    return 0;
}