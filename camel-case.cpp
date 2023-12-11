#include <string>
#include <iostream>
using namespace std;

string camelCase(string input) {
    string output = "";
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == '-') {
            i++;
            output += toupper(input[i]);
        } else {
            output += input[i];
        }
    }
    return output;
}
int main() {
    string input = "camel-case example-test-string";
    cout << camelCase(input) << endl;
    return 0;
}