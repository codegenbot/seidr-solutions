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
    int sum = 0;
    while (max_prime > 0) {
        sum += max_prime % 10;
        max_prime /= 10;
    }
    return sum;
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
    assert(skkkasdkd({127, 97, 8192}) == 10);
    vector<int> numbers = {1, 2, 3};
    cout << "The sum of the last digits of all prime numbers is: " << skjkasdkd(numbers) << endl;
    return 0;
}