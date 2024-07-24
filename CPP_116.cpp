#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_vector(vector<int> arr) {
    vector<pair<int, int>> vec;
    for (int i : arr) {
        vec.push_back({countBits(i), i});
    }
    sort(vec.begin(), vec.end());
    return vector<int>(vec.begin(), vec.end());
}

int countBits(int n) {
    int count = 0;
    while (n > 0) {
        n &= ~(1);
        count++;
    }
    return count;
}