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

int main() {
    vector<int> input;
    int n, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        input.push_back(x);
    }

    for (int i = input.size() - 1; i >= 0; i--) {
        if (i % 2 == 0) {
            sum += input[i] * 2;
            if (sum > 9) {
                sum -= 9;
            }
        } else {
            sum += input[i];
        }
    }
    cout << sum << endl;
}