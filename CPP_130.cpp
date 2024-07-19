#include <iostream>
#include <vector>
using namespace std;

vector<int> tri(int n) {
    vector<int> result(1);
    if (n > 0) {
        result.push_back(3);
        for (int i = 2; i <= n; i++) {
            int next = (i % 2 == 0) ? 1 + i / 2 : result[i - 1] + result[i - 2] + result[i];
            result.push_back(next);
        }
    }
    return result;
}

int main() {
    int n;
    cout << "Enter a non-negative integer number: ";
    cin >> n;
    vector<int> res = tri(n);
    for (int i : res) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}