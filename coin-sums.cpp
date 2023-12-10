#include <vector>
#include <iostream>
using namespace std;
const int coins[] = {1, 5, 10, 25};
int main() {
    int n;
    cin >> n;
    vector<int> count(4);
    for (int i = 3; i >= 0; i--) {
        count[i] = n / coins[i];
        n %= coins[i];
    }
    cout << count[0] << " " << count[1] << " " << count[2] << " " << count[3] << endl;
    return 0;
}