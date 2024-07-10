#include <iostream>

using namespace std;

int startsOneEnds(int n) {
    int count = 0;
    for (long long i = 1; i <= 9; i++) {
        if (i == 1 || to_string(i).substr(0, 1) == "1" || to_string(i).substr(to_string(i).length() - 1, 1) == "1")
            count++;
    }
    for (long long i = 10; i <= n; i++) {
        if (to_string(i)[0] == '1' || to_string(i)[to_string(i).length() - 1] == '1')
            count++;
    }
    return count;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Count of numbers that start or end with 1 is: " << startsOneEnds(n) << endl;
    return 0;
}