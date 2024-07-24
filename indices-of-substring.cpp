#include <iostream>
#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int last;
    if ((last = text.find(target)) != string::npos) {
        indices.push_back(last);
    }
    while ((last = text.find(target, last + 1)) != string::npos) {
        indices.push_back(last);
    }
    return indices;
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
}