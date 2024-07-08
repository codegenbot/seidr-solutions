#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double prob = 0.0;
    for (int i = 1; i < min(n, m); i++) {
        if(i != 1){
            prob += (1.0 * (min(n, m) - i) / min(n, m));
        }
    }
    if(m > n) return prob;
    else if(n > m) return 1 - prob;
    else return 1/2.0; 
}

int main() {
    int n, m;
    cout << "Enter the number of sides for Peter's die: ";
    cin >> n;
    cout << "Enter the number of sides for Colin's die: ";
    cin >> m;
    double result = diceGame(n, m);
    cout << "Probability: " << std::to_string(result) << endl;
    return 0};