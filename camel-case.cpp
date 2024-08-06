Here is the solution:

#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cin >> str;
    string output = "";
    for (char c : str) {
        if (c == '-') {
            output += c[1].toupper();
        } else if (c == ' ') {
            output += " ";
        } else {
            output += c;
        }
    }
    cout << output;
}