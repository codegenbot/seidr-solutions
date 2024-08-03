#include <vector>
using namespace std;

int luhn(int n) {
    int sum = 0;
    for (int i = 15; i >= 0; --i) {
        int digit = (n / pow(10, i)) % 10;
        if ((i % 2 == 1 && digit % 2 == 1) || (i % 2 == 0))
            digit *= 2;
        if (digit > 9)
            sum += digit - 9;
        else
            sum += digit;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; ++i) {
        cin >> v[i];
    }
    cout << luhn((*max_element(v.begin(), v.end()))<<endl;
    return 0;
}