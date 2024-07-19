#include <iostream>
#include <string>

using namespace std;

int mainFunction() {
    string str1, str2, str3;
    cout << "Enter three numbers: ";
    cin >> ws >> str1 >> ws >> str2 >> ws >> str3;
    
    if (str1.empty() || str2.empty() || str3.empty()) {
        cout << "Error: Please enter valid integer values.\n";
    } else {
        int a = stoi(str1), b = stoi(str2), c = stoi(str3);
        cout << "The numbers are integers: " << a << ", " << b << ", " << c << "\n";
    }

    return 0;
}