#include <iostream>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (long long i = 1; ; i *= 10) {
        if (i > n) break;
        count += 2; // start or end with 1
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    cout << starts_one_ends(n) << endl;
    return 0;
}