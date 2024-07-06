#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_array(vector<int> array) {
    int first = array.empty() ? 0 : array[0];
    int last = array.empty() ? 0 : array.back();
    
    if ((first + last) % 2 == 1)
        sort(array.begin(), array.end());
    else
        sort(array.rbegin(), array.rend());
    
    return array;
}