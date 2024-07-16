#include <vector>
#include <iostream>
#include <sstream>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    int pos = 0;
    if (text.find(target) != string::npos) {
        result.push_back(0);
        pos += m;
    }
    while ((pos = text.find(target, pos)) != string::npos) {
        result.push_back(pos); 
        pos = text.find(target, pos + 1);
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