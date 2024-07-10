```cpp
#include <cmath>
#include <iostream>
using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if (i == 1 || i % 10 == 1)
            count++;
        if (n > 1) {
            for (int j = 1; j < pow(10, n-1); j++) {
                int num = i * pow(10, n-1) + j;
                if (num >= 10 && (num % 10 == 1 || num / pow(10, (int)log10(num)) == 1))
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
    cout << "Count of numbers that start or end with 1 is: " << starts_one_ends(n) << endl;
    return 0;
}