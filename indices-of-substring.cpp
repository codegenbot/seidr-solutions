#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> findIndices(string text, string target) {
    vector<string> indices;
    int prevLast = 0;
    while ((int last = text.find(target, prevLast)) != string::npos) {
        indices.push_back(to_string(last + 1));
        prevLast = last + 1;
    }
    return indices;
}

int main() {
    string text;
    cin >> text;

    string target;
    cin >> target;

    vector<string> indices = findIndices(text, target);
    for (string i : indices) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}