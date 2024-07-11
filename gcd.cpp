```cpp
#include <vector>
#include <string>

using namespace std;

vector<int> indicesOfSubstring(std::string text, std::string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for (int i = 0; i <= n - m; i++) {
        if (text.substr(i, m) == target) {
            result.push_back(i);
        }
    }

    return result;
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    string text = "banana";
    string target = "ana";
    vector<int> indices = indicesOfSubstring(text, target);
    for (int i : indices) {
        cout << i << endl;
    }
    
    int a = 48;
    int b = 16;
    cout << "GCD of " << a << " and " << b << " is: " << gcd(a, b) << endl;
    return 0;
}