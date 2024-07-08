#include <iostream>
#include <vector>
using namespace std;

vector<int> tri(int n) {
    vector<int> result(1);
    if (n > 0) {
        result.push_back(3);
        for (int i = 2; i <= n; i++) {
            int tribonacci = 0;
            if (i % 2 == 0)
                tribonacci = 1 + i / 2;
            else
                tribonacci = result[i - 1] + result[i - 2] + result[i];
            result.push_back(tribonacci);
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