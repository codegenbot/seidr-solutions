```cpp
#include <iostream>
#include <sstream>
#include <cctype>
#include <string>

bool simplify(string x, string n) {
    char arr1[6], arr2[4];
    stringstream s1(x), s2(n);
    int val;
    s1 >> val;
    sprintf(arr1, "%d", val);

    char c;
    s2 >> c;
    slash = c;

    string s2_str(c, 1);
    return (atoi(arr1) * atoi(s2_str.c_str()) == 
           atoi(arr1[0].c_str()) * (slash - '0'));
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