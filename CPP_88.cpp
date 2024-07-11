#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_array(vector<int> array) {
    int sum = array[0] + array[array.size() - 1];
    if (sum % 2 == 0) {
        vector<int> sortedArray = array;
        sort(sortedArray.begin(), sortedArray.end(), greater<int>());
        return sortedArray;
    } else {
        vector<int> sortedArray = array;
        sort(sortedArray.begin(), sortedArray.end());
        return sortedArray;
    }
}