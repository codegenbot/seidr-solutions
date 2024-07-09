#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> sort_array(vector<int> array) {
    if (array.empty()) return array;
    
    int first = array[0], last = array.back();
    int sum = first + last;
    
    vector<int> result = array;
    
    if (sum % 2 == 1)
        sort(result.begin(), result.end());
    else
        sort(result.rbegin(), result.rend());
    
    return result;
}