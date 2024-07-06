```cpp
#include <iostream>
#include <sstream>
using namespace std;

int fruit_distribution(string s, int n) {
    istringstream iss(s);
    string token;
    int total = 0;
    int apples = 0;
    int oranges = 0;

    while (getline(iss, token, ' ')) {
        if (token.find("apples") != string::npos) {
            istringstream app_token(token);
            app_token >> apples;
        } else if (token.find("oranges") != string::npos) {
            istringstream ora_token(token);
            ora_token >> oranges;
        }
    }

    total = max(0, n - apples - oranges);

    return apples + oranges > n ? 0 : total;
}

int main() {
    string s;
    int n;
    cout << "Enter the string with fruit information: ";
    cin >> s;
    cout << "Enter the number of fruits to distribute: ";
    cin >> n;

    int result = fruit_distribution(s, n);
    cout << "Total fruits distributed: " << result << endl;

    return 0;
}