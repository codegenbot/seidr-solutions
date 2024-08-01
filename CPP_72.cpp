#include <vector>
#include <algorithm>

using namespace std;

bool will_it_fly(vector<int> q, int w) {
    vector<int> revQ = q;
    reverse(revQ.begin(), revQ.end());
    if (q != revQ) return false;  // not balanced

    int sum = 0;
    for (int i : q) sum += i;
    if (sum > w) return false;     // sum exceeds max weight

    return true;
}