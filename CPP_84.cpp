#include <iostream>
#include <string>

using namespace std;

string solve(int N) {
    string binary = "";
    while (N > 0) {
        if (N % 2 == 1)
            binary.push_back('1');
        else
            binary.push_back('0');
        N /= 2;
    }
    reverse(binary.begin(), binary.end());
    return binary;
}

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;
    cout << solve(N) << endl;
    return 0;
}