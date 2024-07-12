#include <iostream>
using namespace std;

int solve(int N) {
    int sum = 0;
    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0)
            sum += i;
    }
    string strSum = to_string(sum);
    return stoi(strSum);
}

int main() {
    int N;
    cin >> N;
    cout << solve(N) << endl;
    assert(solve(963) == 10050);
}