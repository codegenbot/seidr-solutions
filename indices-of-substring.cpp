#include <iostream>
#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    int i = 0; 
    while (i <= n - m) { 
        if (text.substr(i, m) == target) { 
            result.push_back(i); 
            i++; // Only increment i by 1 to allow for overlapping matches
        }
        else {
            i++;
        }
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