#include <iostream>
#include <sstream>
#include <cctype>
#include <string>

bool simplifyFraction(string numerator, string denominator) {
    char arr1[6], arr2[4];
    stringstream s1(numerator), s2(denominator);
    s1 >> arr1;
    char slash;
    s2 >> arr2;
    slash = s2.peek();
    s2.get(); // Consume the slash
    s2 >> arr2[1];

    return (atoi(arr1) * (slash - '0') == 
           atoi(std::string(1, arr2[0]).c_str()) * (slash - '0'));
}

int main() {
    string numerator, denominator;
    cout << "Enter the numerator: ";
    cin >> numerator;
    cout << "Enter the denominator: ";
    cin >> denominator;

    if(simplifyFraction(numerator, denominator))
        cout << "The fraction is simplified." << endl;
    else
        cout << "The fraction cannot be simplified." << endl;

    return 0;
}