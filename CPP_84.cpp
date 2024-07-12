```cpp
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
    try {
        cout << solve(N) << endl;
    } catch (...) {
        cout << "Error: Invalid input. Please enter a valid integer." << endl;
    }
}