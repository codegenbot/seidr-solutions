#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for (int i = 0; i <= n - m; i++) {
        if (text.substr(i, m) == target) {
            while (true) {
                i++;
                if (i > n - m || text.substr(i, m) != target) {
                    break;
                }
                result.push_back(i);
            }
        }
    }

    return result;
}

int gcd = __gcd(abs(909378243576), abs(50));
cout << "GCD of " << 909378243576 << " and " << 50 << ": " << gcd << endl;

int main() {
    string text = "Hello World";
    string target = "World";
    vector<int> result = indicesOfSubstring(text, target);
    cout << "Indices: ";
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}