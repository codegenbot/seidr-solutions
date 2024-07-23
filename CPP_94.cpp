#include <vector>
using namespace std;

int skjkasdkd(vector<int> lst) {
    int max_prime = 0;
    for (int num : lst) {
        if (isPrime(num)) {
            if (num > max_prime) {
                max_prime = num;
            }
        }
    }
    int sum_of_digits = 0;
    while (max_prime > 0) {
        sum_of_digits += max_prime % 10;
        max_prime /= 10;
    }
    return sum_of_digits;
}

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;

}

int main() {
    vector<int> lst;
    int num;
    cout << "Enter the numbers. To stop, enter -1.\n";
    while ((cin >> num) && (num != -1)) {
        lst.push_back(num);
    }

    cout << "The sum of digits in the largest prime number is: ";
    cout << skjkasdkd(lst);

    return 0;
}