#include <iostream>
#include <string>
using namespace std;

int fruit_distribution(string s, int n) {
    size_t pos = 0;
    int apples = 0, oranges = 0;

    while ((pos = s.find("apples", pos)) != string::npos) {
        if (s.substr(pos + 7, 2).find("and") == string::npos) {
            apples = stoi(s.substr(pos + 8));
            break;
        }
        pos += 10;
    }

    while ((pos = s.find("oranges", pos)) != string::npos) {
        if (s.substr(pos + 7, 2).find("and") == string::npos) {
            oranges = stoi(s.substr(pos + 8));
            break;
        }
        pos += 10;
    }

    return n - apples - oranges;
}

int main() {
    cout << fruit_distribution("5 apples and 6 oranges", 19) << endl;
    cout << fruit_distribution("0 apples and 1 oranges", 3) << endl;
    cout << fruit_distribution("2 apples and 3 oranges", 100) << endl;
    cout << fruit_distribution("100 apples and 1 oranges", 120) << endl;

    return 0;
}