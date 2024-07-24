#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_array(vector<int> array) {
    int sum = array[0] + array[array.size() - 1];
    if (sum % 2 == 0) {
        vector<int> copy = array;
        sort(copy.begin(), copy.end(), greater<int>());
        return copy;
    } else {
        vector<int> copy = array;
        sort(copy.begin(), copy.end());
        return copy;
    }
}