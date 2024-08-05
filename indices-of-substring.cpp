#include <vector>
#include <iostream>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int pos = 0;
    while ((pos = text.find(target)) != string::npos) {
        indices.push_back(pos);
        pos += target.size();
    }
    return indices;
}

int main() {
    string text, target;
    cout << "Enter the text: ";
    cin >> text;
    cout << "Enter the target: ";
    cin >> target;
    vector<int> result = findIndices(text, target);
    for (int i : result) {
        cout << i << " ";
    }
    return 0;