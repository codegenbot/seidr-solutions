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
    if (n <= 1) return {input[0]};
    
    int left = 0, right = n - 1;
    while (left < right && input[left] != input[right]) {
        int sumLeft = input[left], sumRight = input[right];
        if (sumLeft > sumRight) {
            sumLeft -= sumRight;
            left++;
        } else {
            sumRight -= sumLeft;
            right--;
        }
    }
    
    return {input[left], input[right]};
}