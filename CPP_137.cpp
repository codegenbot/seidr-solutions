#include <iostream>
#include <string>

using namespace std;

string compare_one(string a) {
    stof s1 = stof(a);
    if (a.find('x') != string::npos)
        return a;
    else {
        a = to_string(stoi(a)); 
        stof s2 = stof(a);
        if (s1 > s2)
            return a;
        else if (s1 == s2)
            return "None";
        else
            return a;
    }
}

int main() {
    string a;
    cout << "Enter the first number: ";
    cin >> a;
    cout << compare_one(a) << endl;

    return 0;
}