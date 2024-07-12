#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string compare_one(string a, string b) {
    if (stof(a) > stof(b)) 
        return a;
    else if (stof(a) == stof(b))
        return "None";
    else if (a > b) 
        return a;
    else
        return b;
}

int main() {
    string a, b;
    cout << "Enter the first number or word: ";
    cin >> a;
    cout << "Enter the second number or word: ";
    cin >> b;

    cout << compare_one(a, b) << endl;

    return 0;
}