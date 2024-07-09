#include <iostream>
#include <sstream>
#include <cctype>

bool simplify(string x, string n) {
    char arr1[6], arr2[4];
    stringstream s1(x), s2(n);
    s1 >> arr1;
    char slash;
    s2 >> arr2[0] >> slash >> arr2[1];

    return (atoi(arr1) * atoi(std::string(1, arr2[1]).c_str()) == 
           atoi(std::string(1, arr2[0]).c_str()) * (slash - '0'));
}

int main() {
    string x, n;
    cout << "Enter the numerator: ";
    cin >> x;
    cout << "Enter the denominator: ";
    cin >> n;

    if(simplify(x, n))
        cout << "The fraction is simplified." << endl;
    else
        cout << "The fraction cannot be simplified." << endl;

    return 0;
}