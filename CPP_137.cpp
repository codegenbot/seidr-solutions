#include <iostream>
#include <string>
#include <limits>

using namespace std;

string compare_one(string s1, int s2) {
    double d1 = stod(s1);
    if (d1 >= s2) return s1;
    else if (d1 == s2) return "None";
    else return to_string(s2);
}

int main_function() {
    cout << compare_one("123.45", 6789) << endl; 
    string s1 = "1";  
    int s2 = 2;  
    if(compare_one(s1, s2) == s1) cout << s1 << " is greater than or equal to " << s2 << endl;
    else cout << s2 << " is greater than " << s1 << endl;
    return 0;
}