#include <vector>
using namespace std;

int luhn(vector<int> v) {
    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
        if ((i % 2) == 1) {
            int doubleDigit = v[i] * 2;
            if (doubleDigit > 9) {
                doubleDigit -= 9;
            }
            sum += doubleDigit;
        } else {
            sum += v[i];
        }
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cout << luhn(v) << endl;
    return 0;
}