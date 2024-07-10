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

vector<string> sortedListSum(vector<string> inputList) {
    sort(inputList.begin(), inputList.end());
    return inputList;
}

int main() {
    assert(areSame(sortedListSum({"aaaa", "bbbb", "dd", "cc"}), {"cc", "dd", "aaaa", "bbbb"}));
    return 0;
}