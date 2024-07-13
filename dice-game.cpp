```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1, str2;
    cout << "Enter the number of sides for Peter's die: ";
    cin >> str1;
    int n = stoi(str1);
    cout << "Enter the number of sides for Colin's die: ";
    cin >> str2;
    int m = stoi(str2);

    cout << "You entered: " << str1 << " and " << str2 << endl;

    double probability = 0.0;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            if(i > j) {
                probability += 1.0 / (double)n / (double)m;
            }
        }
    }

    cout << "The probability that Peter rolls strictly higher than Colin is: " << probability << endl;

    return 0;
}