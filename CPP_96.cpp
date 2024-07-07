#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int count_up_to(int n) {
    int sum = 0;
    for (int i = 1; i <= n; ++i)
        sum += i;
    return sum;
}