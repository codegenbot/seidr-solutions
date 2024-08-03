#include <vector>
#include <iostream>

using namespace std;

int main() {
    int cents;
    cin >> cents;
    
    vector<int> coins = {1, 5, 10, 25};
    vector<int> count(4);
    
    for(int i = 0; i < 4; i++) {
        while(cents >= coins[i]) {
            cents -= coins[i];
            count[i]++;
        }
    }
    
    cout << count[3] << endl;
    cout << count[2] << endl;
    cout << count[1] << endl;
    cout << count[0] << endl;
    
    return 0;
}