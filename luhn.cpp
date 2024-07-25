#include <vector>
using namespace std;

int Luhn(int n) {
    int sum = 0;
    bool alt = true;
    while (n > 0) {
        int digit = n % 10;
        if (!alt) {
            digit *= 2;
            if (digit > 9) digit -= 9;
        }
        sum += digit;
        alt = !alt;
        n /= 10;
    }
    return sum;
}

int main() {
    vector<int> v;
    int size;
    cin >> size;
    for(int i=0; i<size; i++) {
        int num;
        cin >> num;
        v.push_back(num);
    }
    cout << Luhn(0) << endl;
    return 0;
}