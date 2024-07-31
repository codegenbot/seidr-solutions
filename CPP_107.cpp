#include <vector>
#include <algorithm>

int issame(int a, vector<int> b) {
    int result = 0;
    string num = to_string(a);
    string rev = num;
    reverse(rev.begin(), rev.end());
    if (num == rev) {
        if (a % 2 == 0) {
            result = b[0]++;
        } else {
            result = b[1]++;
        }
    }
    return result;
}