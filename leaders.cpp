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

vector<int> leaders(vector<int> v) {
    vector<int> result;
    
    int currentLeader = v.back();
    result.push_back(currentLeader);
    
    for (int i = v.size() - 2; i >= 0; i--) {
        if (v[i] >= currentLeader) {
            result.push_back(v[i]);
            currentLeader = v[i];
        }
    }
    
    return result;
}