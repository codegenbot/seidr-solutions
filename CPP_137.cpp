#include <iostream>
#include<string>

using namespace std;

string compare_one(string a, double b) {
    if (stod(a) > b)
        return a;
    else
        return to_string(b);
}

int main() {
    cout << compare_one("1", 2.5) << endl;
    cout << compare_one("1", 2.5) << endl; 
    cout << compare_one("5.1", "6") << endl;
    cout << to_string(1) << endl; 
    return 0;
}