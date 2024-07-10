```cpp
#include <iostream>
#include <vector>
using namespace std;

vector<int> factorize(int n) {
    vector<int> factors;
    for (int i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 1)
        factors.push_back(n);
    return factors;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    vector<int> result = factorize(num);
    cout << "{";
    for (int i = 0; i < result.size(); ++i) {
        if (i > 0)
            cout << ", ";
        cout << result[i];
    }
    cout << "}" << endl;
    return 0;
}