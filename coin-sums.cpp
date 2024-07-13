#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int coins[4] = {0, 0, 0, 0};

    for(int i = 0; i <= 3; i++) {
        if(i == 0) {
            while(cents >= 5) {
                cents -= 5;
                coins[i]++;
            }
        } else if(i == 1) {
            while(cents >= 10) {
                cents -= 10;
                coins[i]++;
            }
        } else if(i == 2) {
            while(cents >= 25) {
                cents -= 25;
                coins[i]++;
            }
        } else {
            while(cents > 0) {
                coins[i]++;
                cents--;
            }
        }
    }

    cout << coins[3] << endl; 
    cout << coins[2] << endl;   
    cout << coins[1] << endl;      
    cout << coins[0] << endl;     

    return 0;
}