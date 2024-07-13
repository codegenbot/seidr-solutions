```cpp
#include <iostream>
#include <vector>
#include <string>
using namespace std;

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

vector<long long> indicesOfSubstring(string text, string target) {
    vector<long long> result;
    long long n = text.length();
    long long m = target.length();

    for (long long i = 0; i <= n - m; i++) {
        if (text.substr(i, m) == target) {
            result.push_back(int(i));
            while (i + m <= n && text.substr(i, m) == target) {
                i++;
            }
        }
    }

    return result;
}

int main() {
    cout << "GCD of 12 and 15: " << gcd(12, 15) << endl;
    string text = "Hello world";
    string target = "world";
    vector<int> indices = indicesOfSubstring(text, target);
    for (int index : indices) {
        cout << "Target found at index: " << index << endl;
    }
    return 0;
}