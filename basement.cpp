
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

int getNegativeIndex(vector<int> vec) {
    int sum = 0;
    for (int i = 0; i < vec.size(); i++) {
        sum += vec[i];
        if (sum < 0) {
            return i;
        }
    }
    // If the sum of all integers is negative, return the last index.
    return vec.size() - 1;
}

int main() {
    vector<int> vec = {1, -1};
    int index = getNegativeIndex(vec);
    cout << "The first negative index is: " << index << endl;
    return 0;
}