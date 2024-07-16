#include <vector>
#include <iostream>
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
        pos = text.find(target, pos);
    }

    return result;
}

int main() {
    string text, target;
    cin >> text >> target;

    vector<int> indices = indicesOfSubstring(text, target);

    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}