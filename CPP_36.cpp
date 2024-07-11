#include <iostream>

using namespace std;

int fizz_buzz(int n) {
    int count = 0;
    for (int i = 1; i < n; i++) {
        if ((i % 11 == 0 || i % 13 == 0) && to_string(i).find('7') != string::npos)
            count++;
    }
    return count;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Number of times digit 7 appears: " << fizz_buzz(n) << endl;
    return 0;
}