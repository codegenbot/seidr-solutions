#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_array(vector<int> array) {
    vector<int> result;
    
    int sum = 0;
    for (int num : array) {
        sum += num;
    }
    
    if (sum % 2 == 0) {
        result = vector<int>(array.begin(), array.end());
        sort(result.begin(), result.end(), greater<int>());
    } else {
        result = array;
        sort(result.begin(), result.end());
        reverse(result.begin(), result.end()); 
    }
    
    return result;
}