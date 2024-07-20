#include <iostream>
#include <cmath>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if ((i == 1) || (i == 9)) {
            count += 1;
        }
        for (int j = 1; j < pow(10, n-2); j++) {
            int num = i * pow(10, n-1) + j;
            if ((num / pow(10, n-1)) % 10 == 1 || (num % 10) == 1)
                count++;
        }
    }
    return count;

}

int main2() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "The count of the numbers of " << n << "-digit positive integers that start or end with 1 is: " << starts_one_ends(n) << endl;
    return 0;
}