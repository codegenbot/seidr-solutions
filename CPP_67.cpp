#include <iostream>
#include <string>
using namespace std;

int fruit_distribution(string s, int n) {
    int apples = 0, oranges = 0;
    size_t pos = s.find(" apples");
    if (pos != string::npos) {
        apples = stoi(s.substr(0, pos));
    }
    pos = s.find(" and ");
    if (pos != string::npos) {
        size_t pos_oranges = s.find(" oranges", pos + 5);
        if (pos_oranges != string::npos) {
            oranges = stoi(s.substr(pos + 5, pos_oranges - (pos + 5)));
        }
    }
    return n - apples - oranges;
}

int main() {
    cout << fruit_distribution("5 apples and 6 oranges", 19) << endl; // 8
    cout << fruit_distribution("0 apples and 1 oranges", 3) << endl;  // 2
    cout << fruit_distribution("2 apples and 3 oranges", 100) << endl; // 95
    cout << fruit_distribution("100 apples and 1 oranges", 120) << endl; // 19
    return 0;
}