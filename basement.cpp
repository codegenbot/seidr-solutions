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
    vector<int> vec;
    int n, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        vec.push_back(x);
    }
    for (int i = 0; i < n; i++) {
        sum += vec[i];
        if (sum < 0) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}