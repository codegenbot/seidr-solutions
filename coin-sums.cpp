#include <vector>
using namespace std;

vector<int> coinSums(int cents) {
    vector<int> coins(4);
    for (int i = 0; i < 4; i++) {
        if (i == 0) { // Pennies
            coins[i] = cents / 1;
            cents %= 1;
        } else if (i == 1) { // Nickles
            coins[i] = cents / 5;
            cents %= 5;
        } else if (i == 2) { // Dimes
            coins[i] = cents / 10;
            cents %= 10;
        } else { // Quarters
            coins[i] = cents / 25;
            cents %= 25;
        }
    }
    return coins;
}

int main() {
    int n;
    cin >> n;
    vector<int> res = coinSums(n);
    for (int i = 0; i < 4; i++) {
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}