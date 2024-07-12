#include <iostream>
#include <string>

using namespace std;

string compare_one(string a) {
    double s1 = stod(a);
    if (a.find('x') != string::npos)
        return "None";
    else {
        int s2 = stoi(a); 
        if (s1 > s2)
            return to_string(s1);
        else if (s1 == s2)
            return "None";
        else
            return to_string(s1);
    }
}

int main() {
    string a;
    cout << "Enter the first number: ";
    cin >> a;
    cout << compare_one(a) << endl;

    return 0;
}