#include <iostream>
#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int prevLast = -1;
    if ((prevLast = text.find(target)) != string::npos) {
        indices.push_back(prevLast);
    }
    int pos = 0;
    while ((pos = text.find(target, prevLast + 1)) != string::npos) {
        indices.push_back(pos);
        prevLast = pos;
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