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

vector<int> cutVector(vector<int>& input) {
    vector<int> result;
    int left, right;
    for (left = 0, right = input.size() - 1; left <= right;) {
        if (input[left] == input[right]) {
            result.push_back(input[left]);
            break;
        } else {
            int diff = abs(input[left] - input[right]);
            if (diff < 2) {
                result.push_back(input[left]);
                result.push_back(input[right]);
                break;
            }
        }
    }
    return result;
}

int main() {
    vector<int> input = {1, 0};
    vector<int> output = cutVector(input);
    cout << "Output: ";
    for (auto i : output) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}