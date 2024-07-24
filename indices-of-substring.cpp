#include <iostream>
#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int prevLast = -1;
    int last;
    if ((last = text.find(target)) != string::npos) {
        indices.push_back(last);
        prevLast = last;
    } else if (text.find(target, 0) != string::npos) {
        prevLast = 1;
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
}