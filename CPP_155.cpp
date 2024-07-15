#include <vector>
#include <string>
#include <cassert>
#include <algorithm>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> even_odd_count(int num) {
    vector<int> count(2, 0);
    string numStr = to_string(abs(num));
    for (char c : numStr) {
        if ((c - '0') % 2 == 0) {
            count[0]++;
        } else {
            count[1]++;
        }
    }
    return count;
}

assert(issame(even_odd_count(0), {1, 0}));
return 0;