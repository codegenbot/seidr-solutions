#include <iostream>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (long long i = 1; i <= 9LL; i++) {
        if (i == 1 || i % 10 == 1) {
            count++;
        }
        for (long long j = 1; j <= 9LL; j++) {
            long long num = i * pow(10, n - 1) + j;
            if (num >= 1 && num <= 9 || to_string(num)[0] == '1' || to_string(num)[to_string(num).length() - 1] == '1') {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int n;
    cout << "Enter the number of digits: ";
    cin >> n;
    cout << "The count of numbers that start or end with 1 is: " << starts_one_ends(n) << endl;
    return 0;
}