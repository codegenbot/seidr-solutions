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
vector<int> leaders(vector<int> a) {
    vector<int> result;
    int max_so_far = INT_MIN;
    for (int i = a.size() - 1; i >= 0; i--) {
        if (a[i] > max_so_far) {
            result.push_back(a[i]);
            max_so_far = a[i];
        }
    }
    return result;
}