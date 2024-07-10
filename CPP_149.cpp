#include <vector>
#include <string>
#include <algorithm>

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