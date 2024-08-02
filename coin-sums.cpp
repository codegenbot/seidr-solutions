#include <vector>
using namespace std;

vector<int> coinSums(int cents) {
    vector<int> coins(4);
    
    for (int i = 0; i < 4; i++) {
        if (i == 0) { // pennies
            while (cents >= 1) {
                cents -= 1;
                coins[i]++;
            }
        } else if (i == 1) { // nickles
            while (cents >= 5) {
                cents -= 5;
                coins[i]++;
            }
        } else if (i == 2) { // dimes
            while (cents >= 10) {
                cents -= 10;
                coins[i]++;
            }
        } else { // quarters
            while (cents >= 25) {
                cents -= 25;
                coins[i]++;
            }
        }
    }
    
    return coins;
}

int main() {
    int n;
    cin >> n;
    vector<int> res = coinSums(n);
    cout << res[0] << endl;
    cout << res[1] << endl;
    cout << res[2] << endl;
    cout << res[3] << endl;
    return 0;
}