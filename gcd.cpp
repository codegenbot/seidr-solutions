#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int start = 0;
    while (start < text.size()) {
        size_t found = text.find(target, start);
        if (found == string::npos) break;
        indices.push_back(found);
        start = found + 1;
    }
    return indices;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    string str;
    cout << "Enter the text and target string for Indices of Substring: ";
    cin >> str;

    int start = str.find(' ');
    if (start == string::npos) {
        string text = str;
        string target = "";
    } else {
        string text = str.substr(0, start);
        string target = str.substr(start + 1);
    }

    int a, b;
    cout << "Enter two integers for GCD: ";
    cin >> a >> b;
    cout << gcd(a, b) << endl;

    vector<int> result = findIndices(text, target);
    for (int i : result)
        cout << i << " ";
    return 0;
}