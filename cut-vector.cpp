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
/*
Given a vector of positive integers, ﬁnd the spot where, if you cut the vector, the numbers on both sides are either equal, or the diﬀerence is as small as possible. Return the two resulting subvectors as two outputs.
For example,
input:
1
0
output:
1
0
0

input:
1
10
output:
1
10
0

input:
1
100
output:
1
100
0

input:
1
1000
output:
1
1000
0

input:
1
10000
output:
1
10000
0
*/
std::pair<std::vector<int>, std::vector<int>> cutVector(std::vector<int> vec) {
    int n = vec.size();
    if (n == 0) return {};
    std::vector<int> left, right;
    for (int i = 0; i < n / 2; i++) {
        left.push_back(vec[i]);
        right.push_back(vec[n - i - 1]);
    }
    int diff = INT_MAX;
    int index = -1;
    for (int i = 0; i < n / 2; i++) {
        if (left[i] == right[n - i - 1]) {
            return {{left}, {right}};
        } else if (diff > abs(left[i] - right[n - i - 1])) {
            diff = abs(left[i] - right[n - i - 1]);
            index = i;
        }
    }
    if (index != -1) {
        left.push_back(vec[index + 1]);
        right.insert(right.begin(), vec[n - index - 2]);
    }
    return {{left}, {right}};
}
int main() {
    std::vector<int> vec = {1, 0};
    auto result = cutVector(vec);
    for (auto& v : result) {
        for (auto x : v) {
            std::cout << x << " ";
        }
        std::cout << "\n";
    }
    return 0;
}