#include <iostream>
#include <vector>

using namespace std;

vector<int> tri(int n) {
    vector<int> result(n + 1);
    if (n >= 1) {
        result[0] = 3;
    }
    for (int i = 2; i <= n; i++) {
        if (i % 2 == 0) {
            result[i] = 1 + i / 2;
        } else {
            result[i] = result[i - 1] + result[i - 2] + result[i - 3];
        }
    }
    return result;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    vector<int> res = tri(n);
    for (int i : res) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}