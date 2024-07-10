#include <vector>
using namespace std;

int luhn(int n) {
    vector<int> v;
    while (n > 0) {
        int digit = n % 10;
        v.push_back(digit);
        n /= 10;
    }
    
    for (int i = 1; i < v.size(); i += 2) {
        v[i] *= 2;
        if (v[i] > 9) {
            v[i] -= 9;
        }
    }
    
    int sum = 0;
    for (int digit : v) {
        sum += digit;
    }
    
    return sum;
}

int main() {
    int n;
    cin >> n;
    cout << luhn(n) << endl;
    return 0;
}