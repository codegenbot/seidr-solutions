#include <string>
#include <iostream>
using namespace std;
int main() {
    string input;
    getline(cin, input);
    
    string output = "";
    for (int i = 0; i < input.size(); i++) {
        if (input[i] == '-') {
            output += toupper(input[i + 1]);
            i++;
        } else {
            output += input[i];
        }
    }
    
    cout << output << endl;
    
    return 0;
}