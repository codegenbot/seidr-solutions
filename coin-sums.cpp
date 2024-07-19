#include <vector>
#include <iostream>

using namespace std;

int main() {
    int cents;
    cin >> cents;

    vector<int> coins = {25, 10, 5, 1}; 

    vector<int> result(4, 0);  

    for (int i = 0; i < coins.size(); i++) {
        while (cents >= coins[i]) {
            cents -= coins[i];
            result[i]++;
        }
    }

    cout << result[0] << endl; 
    cout << result[1] << endl; 
    cout << result[2] << endl; 
    cout << result[3] << endl; 

    return 0;
}