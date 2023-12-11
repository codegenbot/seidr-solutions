#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> cutVector(const vector<int>& input) {
    int n = input.size();
    if (n == 0) {
        return {};
    }

    int left = 0, right = n - 1;
    while (left < right) {
        if (input[left] > input[right]) {
            swap(input[left], input[right]);
        }
        left++;
        right--;
    }

    return {input.begin(), input.end()};
}