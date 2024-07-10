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
    vector<string> input1 = {"apple", "banana", "orange"};
    vector<string> input2 = {"orange", "banana", "apple"};
    
    if (areSame(sorted_list_sum(input1), sorted_list_sum(input2))) {
        cout << "Lists are same after sorting." << endl;
    } else {
        cout << "Lists are different after sorting." << endl;
    }

    return 0;
}