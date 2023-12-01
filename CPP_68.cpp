#include <cassert>
#include <climits>
#include <iostream>
#include <vector>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a.size() == b.size();
}

vector<int> pluck(vector<int> arr) {
    vector<int> result;
    int smallestValue = INT_MAX;
    int smallestIndex = -1;
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallestValue) {
            smallestValue = arr[i];
            smallestIndex = i;
        }
    }
    
    if (smallestIndex != -1) {
        result.push_back(smallestValue);
        result.push_back(smallestIndex);
    }
    
    return result;
}

int main() {
    assert(issame(pluck(vector<int>({7, 9, 7, 1})), vector<int>{}));
    return 0;
}