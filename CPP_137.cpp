#include <iostream>
#include <string>

using namespace std;

void compare_one(string a) {
    double s1 = stod(a);
    if (a.find('x') != string::npos)
        cout << "None" << endl;
    else {
        int s2 = stoi(a); 
        if (s1 > s2)
            cout << to_string(s1) << endl;
        else if (s1 == s2)
            cout << "None" << endl;
        else
            cout << to_string(s1) << endl;
    }
}

int main() {
    string a;
    cout << "Enter the first number: ";
    cin >> a;
    compare_one(a);

    return 0;
}