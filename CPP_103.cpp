```cpp
#include <bits/stdc++.h>
using namespace std;

string rounded_avg(int n, int m) {
    if (n > m) return "-1";
    long long sum = 0;
    for (int i = n; i <= m; i++) sum += i;
    double avg = (double)sum / (m - n + 1);
    int rounded = floor(avg)+1;
    string result = "";
    while (rounded > 0) {
        if (rounded & 1) result.push_back('1');
        else result.push_back('0');
        rounded >>= 1;
    }
    return result;
}

int main() {
    assert(rounded_avg(5, 5) == "101");
}