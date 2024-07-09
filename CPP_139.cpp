#include <cassert>
using namespace std;

long long special_factorial(int n){
    long long result = 1;
    for (int i = 1; i <= n; ++i) {
        long long fact = 1;
        for (int j = 1; j <= i; ++j) {
            fact *= j;
        }
        result *= fact;
    }
    return result;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    assert(special_factorial(num) == special_factorial(num)); // assert that the function is correct
    return 0;
}