#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> sort_array(vector<int> array) {
    int sum = 0;
    for(int i=0; i<array.size();i++){
        sum += array[i];
    }
    if (sum % 2 == 1) {
        sort(array.begin(), array.end());
    } else {
        sort(array.rbegin(), array.rend());
    }
    return array;
}

int main() {
    assert(sort_array({21, 14, 23, 11}) == vector<int>{11, 14, 21, 23});
    return 0;
}