#include <vector>
using namespace std;

bool check_palindrome(const vector<int>& q, int w) {
    int sum = 0;
    for (int i = 0; i < q.size(); i++) {
        sum += q[i];
    }

    if (sum > w) {
        return false;
    }

    vector<int> reversed_q = q;
    reverse(reversed_q.begin(), reversed_q.end());

    return q == reversed_q;
}