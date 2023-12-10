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
Given two integers, return the largest integer that divides each of the integers evenly. Indices of Substring (CW) Given a text string and a target string, return a vector of integers of the indices at which the target appears in the text. If the target string overlaps itself in the text, all indices (including those overlapping) should be returned.
For example,
input:
1
1
output:
1
input:
4
400000
output:
4
input:
54
24
output:
6
input:
4200
3528
output:
168
input:
820000
63550
output:
2050
*/

vector<int> indices_of_substring(const string& text, const string& target) {
    vector<int> result;
    for (int i = 0; i < text.size() - target.size() + 1; ++i) {
        if (text.substr(i, target.size()) == target) {
            result.push_back(i);
        }
    }
    return result;
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> nums(n);
        for (int i = 0; i < n; ++i) {
            cin >> nums[i];
        }
        vector<int> result;
        for (int i = 0; i < m; ++i) {
            int x, y;
            cin >> x >> y;
            vector<int> indices = indices_of_substring(nums, to_string(x));
            for (auto it : indices) {
                if (it + y <= n && nums[it + y - 1] == x) {
                    result.push_back(it);
                    break;
                }
            }
        }
        cout << result.size() << endl;
        for (auto it : result) {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}