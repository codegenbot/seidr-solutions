#include <vector>

int main() {
    int skjkasdkd(vector<int> lst) {
        int maxPrime = 0;
        for (int num : lst) {
            if (isPrime(num)) {
                if (num > maxPrime) {
                    maxPrime = num;
                }
            }
        }
        int sum = 0;
        while (maxPrime) {
            sum += maxPrime % 10;
            maxPrime /= 10;
        }
        return sum;
    }

    bool isPrime(int n) {
        if (n <= 1) return false;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) return false;
        }
        return true;
    }

    int main() {
        vector<int> lst;
        // input your list here
        cout << "Enter a number of integers: ";
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            lst.push_back(x);
        }
        cout << "Sum of digits in the max prime number is: " << skjkasdkd(lst) << endl;
    }