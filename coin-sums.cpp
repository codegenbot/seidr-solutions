#include <vector>
using namespace std;

vector<int> coinSums(int cents) {
    vector<int> coins(4);
    
    int quarter = cents / 25;
    if (quarter > 0) {
        cents %= 25;
        coins[0] = quarter;
    }
    
    int nickel = cents / 5;
    if (nickel > 0) {
        cents %= 5;
        coins[1] = nickel;
    }
    
    int penny = cents;
    coins[2] = penny;
    
    return coins;
}

int main() {
    int n;
    cin >> n;
    vector<int> result = coinSums(n);
    cout << result[0] << endl;
    cout << result[1] << endl;
    cout << result[2] << endl;
    cout << result[3] << endl;
    return 0;
}