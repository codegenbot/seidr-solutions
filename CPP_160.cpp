#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

double do_algebra(vector<string> expressions) {
    double result = 0;
    string operators = expressions[2];

    if (stoi(operators[1]) == 0) {
        result = pow(stod(expressions[0]), stod(expressions[1]));
    } else {
        // ... rest of your code ...
    }
    return result;
}

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

int main() {
    vector<string> expressions;
    string input;

    cout << "Enter the expressions (space separated): ";
    getline(cin, input);
    expressions = split(input);

    double output = do_algebra(expressions);
    cout << "Result: " << output << endl;
    return 0;
}