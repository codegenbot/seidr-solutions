#include <iostream>
#include <cmath>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if (i == 1 || i % 10 == 1) {
            count++;
        }
        for (int j = 0; j < n - 1; j++) {
            int num = i * pow(10, j);
            if ((num % 10) == 1) {
                count++;
            }
        }
    }
    return count;

}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "The number of n-digit positive integers that start or end with 1 is: " << starts_one_ends(n) << endl;
    return 0;
}