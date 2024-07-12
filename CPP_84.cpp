```cpp
#include <iostream>
#include <assert.h>

int solve(int N) {
    int sum = 0;
    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0)
            sum += i;
    }
    return sum;
}

using namespace std;

int mainProblem() {
    int N;
    cin >> N;
    cout << solve(N) << endl;

    assert(solve(963) == 483); 
}