#include <iostream>
#include <string>
using namespace std;

int fruit_distribution(string s, int n) {
    size_t pos = 0;
    int totalApples = 0, totalOranges = 0;

    while ((pos = s.find(" apples", pos)) != string::npos) {
        int numApples = stoi(s.substr(0, pos - 6));
        totalApples += numApples;
        s.erase(0, pos);
    }

    while ((pos = s.find(" oranges", 0)) != string::npos) {
        int numOranges = stoi(s.substr(0, pos - 7));
        totalOranges += numOranges;
        s.erase(0, pos);
    }

    return n - totalApples - totalOranges;
}

int main() {
    cout << fruit_distribution("5 apples and 6 oranges", 19) << endl;
    cout << fruit_distribution("0 apples and 1 oranges", 3) << endl;
    cout << fruit_distribution("2 apples and 3 oranges", 100) << endl;
    cout << fruit_distribution("100 apples and 1 oranges", 120) << endl;
    return 0;
}