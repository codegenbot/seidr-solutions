#include <iostream>
using namespace std;

int main() {
    string text = ""; // input value as a string for the text
    string target = ""; // input value as a string for the target
    cout << "Enter the text: ";
    getline(cin, text);
    cout << "Enter the target: ";
    getline(cin, target); // read the target string without reading newline character left in input buffer

    int indices = 0; // initialize an integer to store indices
    size_t pos = 0; // initialize a position variable for searching within the text
    
    while ((pos = text.find(target)) != string::npos) {
        cout << "Indices: " << pos;
        indices++;
        if (indices < 5) { 
            cout << endl;
        } else {
            break;
        }
        text.erase(0, pos + target.length()); // remove the target from the front of the remaining string
    }

    return 0;
}