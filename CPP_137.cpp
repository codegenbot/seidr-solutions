#include <iostream>
#include <string>
#include <sstream>

using namespace std;

double toDouble(string s) {
    double val = 0;
    stringstream ss(s);
    ss >> val;
    return val;
}

string compare_one(string s1, string s2) {
    double d1 = toDouble(s1);
    double d2 = toDouble(s2);

    if (d1 > d2) return s1;
    else if (d1 == d2) return "None";
    else return s2;
}

int main() {
    cout << compare_one("123.45", "6789") << endl; 
    if(compare_one("1", "2") == "1") cout << "1 is greater than or equal to 2" << endl;
    else cout << "2 is greater than 1" << endl;
    return 0;
}