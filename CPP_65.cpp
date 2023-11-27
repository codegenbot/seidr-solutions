#include <iostream>
#include <string>
using namespace std;

string circular_shift(int x, int shift) {
    string num = to_string(x);
    int n = num.length();
    
    if (shift > n) {
        for (int i = 0; i < n / 2; i++) {
            swap(num[i], num[n - i - 1]);
        }
        return num;
    }
    
    string result = "";
    for (int i = n - shift; i < n; i++) {
        result += num[i];
    }
    for (int i = 0; i < n - shift; i++) {
        result += num[i];
    }
    return result;
}

int main() {
    cout << circular_shift(12, 1) << endl;
    cout << circular_shift(12, 2) << endl;
    
    return 0;
}