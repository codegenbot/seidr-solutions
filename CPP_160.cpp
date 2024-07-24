#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

vector<string> split(string str) {
    vector<string> result;
    string temp;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            result.push_back(temp);
            temp = "";
        } else {
            temp += str[i];
        }
    }
    result.push_back(temp);
    return result;
}

double do_algebra(vector<string> expressions) {
    double a = stod(expressions[0]);
    double b = stod(expressions[1]);
    char op = expressions[2][0];

    if (op == '+') {
        return pow(a, b);
    } else if (op == '-') {
        return pow(a, -b);
    } else if (op == '*') {
        return a * b;
    } else if (op == '/') {
        if (b != 0) {
            return a / b;
        } else {
            return 0; // or throw an exception
        }
    }

    return 0; // or throw an exception
}

int main() {
    vector<string> expressions;
    string input;

    cout << "Enter the expressions (space separated): ";
    getline(cin, input);
    expressions = split(input);

    double output = do_algebra({expressions[0], expressions[1], expressions[2]});
    cout << "Result: " << output << endl;
    return 0;
}