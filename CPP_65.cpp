```cpp
#include <iostream>
#include <string>
using namespace std;

std::string circular_shift(int x, int shift) {
    std::string str = to_string(x);
    int n = str.length();
    if (shift >= n)
        return str;
    else {
        string result = "";
        for (int i = 0; i < n; i++) {
            if (i < shift || i >= n - shift)
                result += str[i];
            else
                result = str[i] + result;
        }
        return result;
    }
}

int main() {
    int x, shift;
    cin >> x >> shift;
    cout << circular_shift(x, shift) << endl;
    return 0;
}