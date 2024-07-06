#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_array(vector<int> array) {
    vector<int> result = array;
    
    int sum = 0;
    for (int num : array) {
        sum += num;
    }
    
    if (sum % 2 == 0) {
        sort(result.begin(), result.end(), greater<int>());
    } else {
        sort(result.begin(), result.end());
    }
    
    return sort(array.begin(), array.end(), greater<int>() == (sum % 2 == 0));
}