#include <vector>
using namespace std;

int skjkasdkd(vector<int> lst);
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int sumOfDigits(int n) {
    int sum = 0;
    while(n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    vector<int> lst = {127, 97, 8192};
    cout << skjkasdkd(lst) << endl;  // Use the function
    return 0;
}