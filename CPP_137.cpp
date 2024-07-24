#include <iostream>
#include<string>

using namespace std;

string compare_one(string a, string b) {
    if (stod(a) > stod(b))
        return a;
    else if (stod(b) > stod(a))
        return b;
    else
        return "None";
}

int main() {
    cout << compare_one("1", "2.5") << endl;
    cout << compare_one("1", "2,3") << endl;
    cout << compare_one("5,1", "6") << endl;
    cout << compare_one("1", "1") << endl;
    return 0;
}