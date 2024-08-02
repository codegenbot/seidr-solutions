#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double total = (double)n * m;
    double count = 0;
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if(i > j) {
                count++;
            }
        }
    }
    
    return count / total;
}

int main(int argc, char* argv[]) {
    int n = 6; 
    int m = 6; 
    cout << "Probability: " << diceGame(n, m) << endl;
    return 0;
}