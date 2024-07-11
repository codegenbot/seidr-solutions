#include <vector>
#include <iostream>
#include <sstream>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for (int i = 0; i <= n - m; i++) {
        if (text.substr(i, m) == target) {
            result.push_back(i);
        }
    }

    return result;
}

int main() {
    string line, text, target;
    cout << "Enter a line: ";
    getline(cin, line);

    stringstream ss(line);
    cout << "Enter a substring to search for: ";
    ss >> text >> ws; // Extract first word into 'text'
    getline(ss, target); // Extract the rest of the line into 'target'

    vector<int> indices = indicesOfSubstring(text, target);

    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}