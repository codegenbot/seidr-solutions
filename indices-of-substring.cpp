#include <vector>
#include <iostream>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    int pos = 0; 

    while (pos < n) { 
        pos = text.find(target, pos); 
        if (pos == string::npos)
            break; 

        result.push_back(pos); 
        pos += m; 
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
        cout << i << endl;
    }
}