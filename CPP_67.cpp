#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int fruit_distribution(string s, int n) {
    int apples, oranges;
    sscanf(s.c_str(), "%d apples and %d oranges", &apples, &oranges);
    return n - apples - oranges;
}

int main() {
    string s;
    int n;
    getline(cin, s);
    cin >> n;
    cout << fruit_distribution(s, n) << endl;
    return 0;
}