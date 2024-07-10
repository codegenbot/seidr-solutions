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
    vector<string> list1 = {"apple", "banana", "orange"};
    vector<string> list2 = {"banana", "orange", "apple"};

    if (areSame(list1, list2)) {
        cout << "Both lists are the same after sorting\n";
    } else {
        cout << "Lists are different after sorting\n";
    }

    vector<string> sortedList = sorted_list_sum(list1);
    for (const string& item : sortedList) {
        cout << item << " ";
    }
    return 0;
}