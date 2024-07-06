#include <iostream>
#include <vector>
using namespace std;

vector<int> tri(int n) {
    vector<int> result(n + 1);
    if (n >= 0) {
        result[0] = 3;
        if (n >= 1) {
            result[1] = 1;
            if (n >= 2) {
                result[2] = 1 + 2 / 2;
                for (int i = 3; i <= n; i++) {
                    result[i] = result[i - 1] + result[i - 2] + (i % 2 ? result[i - 3] : 1 + i / 2);
                }
            }
        }
    }
    return result;
}

int main() {
    int n;
    cout << "Enter a non-negative integer number: ";
    cin >> n;
    vector<int> sequence = tri(n);
    for (int num : sequence) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}