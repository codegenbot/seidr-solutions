```cpp
#include <vector>
using namespace std;

int main() {
    vector<int> lst;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the numbers: ";
    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        lst.push_back(num);
    }
    int result = skjkasdkd(lst);
    cout << "Result: " << result << endl;
    return 0;
}

int skjkasdkd(vector<int> lst) {
    int maxPrime = -1;
    for (int num : lst) {
        if (isPrime(num)) {
            maxPrime = num;
            break;
        }
    }
    
    if (maxPrime == -1) return 0; // or any other default value
    
    int sumOfDigits = 0;
    while (maxPrime > 0) {
        sumOfDigits += maxPrime % 10;
        maxPrime /= 10;
    }
    
    return sumOfDigits;
}

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}