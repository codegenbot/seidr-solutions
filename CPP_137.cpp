#include <iostream>
#include <string>

using namespace std;

string compare_one(string s1, string s2) {
    double d1 = stod(s1);
    double d2 = stod(s2);

    if (d1 > d2) return s1;
    else if (d1 == d2) return "None";
    else return s2;
}

int main() {
    cout << compare_one("123.45", "6789") << endl; 
    return 0;
}