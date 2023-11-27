#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> sort_array(const vector<int>& arr) {
    vector<int> sorted_arr = arr;
    sort(sorted_arr.begin(), sorted_arr.end(), [](int a, int b) {
        int countA = __builtin_popcount(a);
        int countB = __builtin_popcount(b);
        if (countA == countB) {
            return a < b;
        }
        return countA < countB;
    });
    return sorted_arr;
}