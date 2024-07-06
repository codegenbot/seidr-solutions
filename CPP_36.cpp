#include <iostream>

using namespace std;

int fizz_buzz(int n) {
    int count = 0;
    for (int i = 1; i < n; i++) {
        if ((i % 11 == 0 || i % 13 == 0) && to_string(i).find('7') != string::npos) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Number of times digit 7 appears in integers less than " << n << " which are divisible by 11 or 13 is: " << fizz_buzz(n) << endl;
    return 0;
}