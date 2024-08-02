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

    vector<int> lst;
    int num;
    cout << "Enter numbers (negative to stop): ";
    while (true) {
        cin >> num;
        if (num < 0) break;
        lst.push_back(num);
    }
    cout << "Sum of digits in largest prime: " << skjkasdkd(lst) << endl;
    return 0;
}