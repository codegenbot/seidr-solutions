#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string compare_one(string a, int b) {
    if (a > to_string(b)) {
        return a;
    }
    else if (a < to_string(b)) {
        return to_string(b);
    }
    else {
        return "None";
    }
}

int main() {
    string input1, input2;
    cout << "Enter the first value: ";
    cin >> input1;
    cout << "Enter the second value: ";
    cin >> input2;

    if (input2.length() > 0 && isdigit(input2[0])) {
        int b = stoi(input2);
        string output = compare_one(input1, b);
        cout << output << endl;
    }
    else {
        cout << "Invalid second value. Please enter an integer." << endl;
    }

    return 0;
}