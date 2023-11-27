#include <vector>
#include <string>

using namespace std;

bool isSame(vector<string> a, vector<string> b) {
    // Your code here
}

vector<string> splitWords(string txt) {
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

    // Read input for vector a and vector b
    int n;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        string input;
        getline(cin, input);
        a.push_back(input);
    }

    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        string input;
        getline(cin, input);
        b.push_back(input);
    }

    // Call issame function passing vectors a and b as arguments
    bool result = isSame(a, b);

    // Print the result
    cout << (result ? "true" : "false") << endl;

    return 0;
}