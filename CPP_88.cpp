#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_array(vector<int> array) {
    int sum = array[0] + array[array.size() - 1];
    if (sum % 2 == 1)
        sort(array.begin(), array.end());
    else
        stable_partition(array.begin(), array.end(),
            [](int x){ return x; });
    return array;
}