#include <vector>
#include <iostream>

using namespace std;

int main() {
    int cents;
    cin >> cents;

    vector<int> coins = {25, 10, 5, 1}; 

    vector<int> result(4, 0); 

    for (int c : coins) {
        while (cents >= c) {
            cents -= c;
            result[coins.size() - ((c > 25 ? 3 : (c > 10 ? 2 : (c > 5 ? 1 : 0))))]++;   
        }
    }

    cout << result[0] << endl; 
    cout << result[1] << endl; 
    cout << result[2] << endl; 
    cout << result[3] << endl; 

    return 0;
}