#include <vector>
#include <iostream>
using namespace std;
int main() {
    int n = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        int temp = v[i] / 3 - 2;
        if (temp >= 0) {
            sum += temp;
        } else {
            sum -= temp;
        }
    }
    cout << "The sum of the elements in the vector is: " << sum << endl;
    return 0;
}