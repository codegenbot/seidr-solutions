#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_array(vector<int> array) {
    vector<int> result = array;
    
    sort(result.begin(), result.end());
    
    return result;
}