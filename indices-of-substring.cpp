#include <iostream>
#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int i = 0; 
    while (i <= text.length() - target.length()) { 
        int pos = text.find(target);
        while (pos != string::npos && i <= pos) {
            result.push_back(pos);
            pos = text.find(target, pos + 1);
        }
        i++; 
    }

    return result;
}

int main() {
    string text;
    getline(cin, text);
    string target;
    getline(cin, target);

    vector<int> indices = indicesOfSubstring(text, target);

    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}