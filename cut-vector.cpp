#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
using namespace std;

vector<int> cutVector(const vector<int>& input) {
    int n = input.size();
    if (n <= 1) return vector<int>{0, 0};

    int left = 0, right = n - 1;
    while (left < right && input[left] == input[right]) {
        left++;
        right--;
    }

    if (left >= right) return vector<int>{0, 0};

    int diff = abs(input[left] - input[right]);
    while (left > 0 && input[left - 1] == input[right + 1]) {
        left--;
        right++;
        diff = min(diff, abs(input[left] - input[right]));
    }

    return vector<int>{left, right};
}