#include <iostream>
#include <string>
#include <vector>
using namespace std;

int findIndices(string text, string target) {
    vector<int> indices;
    int prevLast = 0;
    while ((int last = text.find(target, prevLast)) != string::npos) {
        indices.push_back(last);
        prevLast = last + 1;
    }
    return indices.size();
}

int main() {
    string text;
    cin >> text;

    string target;
    cin >> target;

    vector<int> indices = findIndices(text, target);
    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;
    return 0;