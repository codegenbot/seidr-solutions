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
int basement(vector<int>& v) {
    int sum = 0, i;
    for (i = 0; i < v.size() && sum >= 0; i++) {
        sum += v[i];
    }
    if (sum == 0) return 0; // If all elements are positive, return 0 as the first index with negative sum
    return i - 1;
}
int main() {
    vector<int> v{1, -1};
    int result = basement(v);
    cout << "The first index with negative sum is: " << result << endl;
    return 0;
}