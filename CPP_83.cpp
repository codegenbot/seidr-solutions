#include <iostream>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (long long i = 1; i <= 9; i++) {
        for (long long j = 1; j <= 10 - log10(i); j++) {
            string numStr = to_string(i);
            if ((numStr.length() == n) && (numStr[0] == '1' || numStr[numStr.length()-1] == '1')) {
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