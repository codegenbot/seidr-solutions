#include <iostream>
using namespace std;

int solve(int N) {
    int sum = 0;
    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0)
            sum += i;
    }
    return sum;
}

int main() {
    int N;
    cin >> N;
    if(N < 1) {
        cout << "Error: Input should be a positive integer." << endl;
    } else {
        cout << solve(N) << endl;
    }
    assert(solve(963) == 15150);
    return 0;
}