#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
#include <cassert>

using namespace std;

bool areSame(vector<string> list1, vector<string> list2) {
    sort(list1.begin(), list1.end());
    sort(list2.begin(), list2.end());
    return list1 == list2;
}

vector<string> sorted_list_sum(vector<string> inputList) {
    sort(inputList.begin(), inputList.end());
    return inputList;
}

int main() {
    vector<string> inputList;
    string input;
    
    while (cin >> input) {
        inputList.push_back(input);
    }
    
    vector<string> result = sorted_list_sum(inputList);
    
    for (const string& s : result) {
        cout << s << " ";
    }
    
    return 0;
}