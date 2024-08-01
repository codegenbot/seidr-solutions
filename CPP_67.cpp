#include <iostream>
#include <string>
using namespace std;

int fruit_distribution(string s, int n) {
    size_t pos = 0;
    int apples = 0, oranges = 0;

    while ((pos = s.find(" and ")) != string::npos) {
        if (s.substr(0, pos).find("apples") != string::npos)
            apples = stoi(s.substr(0, pos).substr(s.find(" ") + 1));
        else
            oranges = stoi(s.substr(0, pos).substr(s.find(" ") + 1));

        s.erase(0, pos + 5);
    }

    if (s.find("apples") != string::npos)
        apples = stoi(s.substr(0, s.find(" ")).substr(s.find(" ") + 1));
    else
        oranges = stoi(s.substr(0, s.find(" ")).substr(s.find(" ") + 1));

    return n - apples - oranges;
}

int main() {
    string s;
    int n;
    cout << "Enter a string that represents the total number of the apples and oranges: ";
    cin >> s;
    cout << "Enter an integer that represent the total number of the fruits in the basket: ";
    cin >> n;

    cout << "The number of mango fruits in the basket is: " << fruit_distribution(s, n) << endl;

    return 0;
}