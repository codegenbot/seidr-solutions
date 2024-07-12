#include <iostream>
#include <string>

using namespace std;

string compare_one(string a, int b) {
    stof s1 = stof(a);
    if (a.find('x') != string::npos)
        return a;
    else {
        a = to_string(b); 
        stof s2 = stof(a);
        if (s1 > s2)
            return to_string(s2);
        else if (s1 == s2)
            return "None";
        else
            return to_string(s2);
    }
}

int main() {
    string a;
    int b; 
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << compare_one(a, b) << endl;

    return 0;
}