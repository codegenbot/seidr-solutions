#include <iostream>
#include <cassert>
using namespace std;

int solve(string N) {
    int sum = 0;
    for (char c : N) {
        if ((c - '0') % 2 == 0)
            sum += (c - '0');
    }
    return sum;
}

int main() {
    string N;
    cin >> N;
    cout << solve(N) << endl;
    assert(solve("963") == 10050);
}