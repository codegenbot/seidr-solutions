#include <vector>
#include <iostream>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int lastSeen = -1; // Last seen position of the target

    for (int i = 0; i < text.length(); ++i) {
        if (text.substr(i-target.length(), target.length()) == target) { 
            lastSeen = i; 
            result.push_back(lastSeen - (target.length() - 1)); 
        }
    }

    return result;
}

int main() {
    string text;
    cin >> text;
    string target;
    cin >> target;

    vector<int> indices = indicesOfSubstring(text, target);

    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}