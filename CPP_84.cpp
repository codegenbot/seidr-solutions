#include <iostream>
#include <string>

using namespace std;

string solve(int N) {
    int sum = 0;
    string binary = "";
    
    while (N > 0) {
        if (N % 2 == 1)
            sum++;
        N /= 2;
    }
    
    for (int i = sum; i > 0; i--) {
        if (i >= 1)
            binary += '1';
        else
            binary += '0';
    }
    
    return binary;
}

int main() {
    int N;
    cin >> N;
    cout << solve(N) << endl;
    return 0;
}