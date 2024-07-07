#include <vector>
using namespace std;

vector<int> coinSums(int cents) {
    vector<int> result(4, 0); // quarters, dimes, nickles, pennies
    
    while (cents > 0) {
        if (cents >= 25) {
            cents -= 25;
            result[0]++;
        } else if (cents >= 10) {
            cents -= 10;
            result[1]++;
        } else if (cents >= 5) {
            cents -= 5;
            result[2]++;
        } else {
            cents--;
            result[3]++;
        }
    }
    
    return result;
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