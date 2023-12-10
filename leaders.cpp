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

vector<int> leaders(const vector<int>& input) {
    vector<int> output;
    int leader = INT_MIN;
    for (auto it = input.rbegin(); it != input.rend(); ++it) {
        if (*it >= leader) {
            leader = *it;
            output.push_back(leader);
        }
    }
    return output;
}