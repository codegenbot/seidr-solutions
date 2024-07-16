```cpp
#include <vector>
#include <string>
#include <initializer_list>
#include <iostream>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    int pos = 0;

    while ((pos = text.find(target, pos)) != string::npos) {
        result.push_back(pos); 
        pos += m; // increment pos by the length of target
    }

    return result;
}

int main() {
    string text, target;
    cout << "Enter the text: ";
    cin >> text;
    cout << "Enter the target: ";
    cin >> target;

    vector<int> results = indicesOfSubstring(text, target);
    for (int i : results) {
        cout << i << " ";
    }
    return 0;
}