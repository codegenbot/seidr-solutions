#include <iostream>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (long long i = 1; i <= n; i++) {
        if (i == 1 || to_string(i).back() == '1') {
            count++;
            bool found = false;
            for (long long j = 1; j < i; j++) {
                string str = to_string(j);
                if ((str.back() != '1' && str[0] != '1')) break;
                found = true;
            }
            if (!found) count++;
        }
    }
    return count;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Count of numbers that start or end with 1: " << starts_one_ends(n) << endl;
    return 0;
}