```cpp
#include <iostream>
using namespace std;

int solve(int N); // Forward declaration

int main() {
    int N;
    cin >> N;
    cout << solve(N) << endl;
}

int solve(int N) {
    if (N % 2 == 0)
        return N / 2;
    else
        return (N * 3) + 1;
}