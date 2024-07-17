#include <iostream>
#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int i = 0; 
    while ((i = text.find(target, i)) != string::npos) { 
        result.push_back(i); 
        i += 1; // Increment i by m for the next search
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