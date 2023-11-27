#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

vector<string> split_words(string txt) {
    vector<string> result;
    string word = "";
    bool hasWhitespace = false;
    bool hasComma = false;

    for (int i = 0; i < txt.length(); i++) {
        if (txt[i] == ' ') {
            hasWhitespace = true;
            if (!word.empty()) {
                result.push_back(word);
                word = "";
            }
        } else if (txt[i] == ',') {
            hasComma = true;
            if (!word.empty()) {
                result.push_back(word);
                word = "";
            }
        } else {
            word += txt[i];
        }
    }

    if (!word.empty()) {
        result.push_back(word);
    }

    if (!hasWhitespace && !hasComma) {
        result.push_back(to_string(3));
    }

    return result;
}

int main() {
    vector<string> a, b;

    // Read input for vector a
    int size;
    string temp;

    cout << "Enter the size of vector A: ";
    cin >> size;

    cout << "Enter the elements of vector A separated by space or comma: ";
    for (int i = 0; i < size; i++) {
        cin >> temp;
        a.push_back(temp);
    }
    
    // Read input for vector b
    cout << "Enter the size of vector B: ";
    cin >> size;

    cout << "Enter the elements of vector B separated by space or comma: ";
    for (int i = 0; i < size; i++) {
        cin >> temp;
        b.push_back(temp);
    }
    
    // Call issame function passing vectors a and b as arguments
    bool result = issame(a, b);

    // Print the result
    cout << "Result: " << (result ? "True" : "False") << endl;

    return 0;
}