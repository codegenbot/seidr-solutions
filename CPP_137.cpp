#include <iostream>
#include <string>
#include <boost/any.hpp>

using namespace std;

string compare_one(string s1, string s2) {
    if (stod(s1) > stod(s2)) return s1;
    else if (stod(s1) == stod(s2)) return "None";
    else return s2;
}

int main() {
    cout << compare_one("123.45", "6789") << endl; 
    if(compare_one("1", "2") == "1") cout << "1 is greater than or equal to 2" << endl;
    else cout << "2 is greater than 1" << endl;
    return 0;
}