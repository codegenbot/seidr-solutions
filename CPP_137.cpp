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
    string s1 = "1", s2 = "2";  
    if(compare_one(s1, s2) == s1) cout << s1 << " is greater than or equal to " << s2 << endl;
    else cout << s2 << " is greater than " << s1 << endl;
    return 0;
}