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
Given a vector of integers, return the two elements that sum to a target integer.
For example,
input:
2
5 7
12
output:
57
input:
2
2500 6352
8852
output:
25006352
input:
2
-14 5
-9
output:
-145
input:
2
40 -19
21
output:
40-19
input:
2
-4 4
0
output:
-44
*/

int findSum(int a, int b, int target) {
    int sum = a + b;
    int diff = abs(target - sum);
    if(diff == 0)
        return sum;
    int res = a;
    if(abs(target - b) < diff)
        res = b;
    else if(abs(target - a) < diff)
        res = a;
    return res;
}

void twoSum(vector<int> &vec, int target) {
    int size = vec.size();
    if(size == 0)
        return;
    int a = vec[0];
    int b = vec[1];
    for(int i = 2; i < size; ++i) {
        if(abs(target - a - b) > abs(target - a - vec[i]))
            b = vec[i];
        if(abs(target - a - b) > abs(target - vec[i] - b))
            a = vec[i];
    }
    cout << findSum(a, b, target) << endl;
}

int main() {
    vector<int> vec;
    int n, temp, target;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> temp;
        vec.push_back(temp);
    }
    cin >> target;
    twoSum(vec, target);
    return 0;
}
