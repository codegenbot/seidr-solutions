#include <iostream>
#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int prevLast = -1;
    size_t last = 0;
    if ((last = text.find(target)) != string::npos) {
        indices.push_back(last);
        prevLast = last;
    }
    while ((last = text.find(target, prevLast + 1)) != string::npos) {
        indices.push_back(last);
        prevLast = last;
    }
    return indices;
}

int main() {
    string text;
    cin >> text;

    string target;
    cin >> target;

    vector<int> indices = findIndices(text, target);
    for (int i = 0; i < indices.size(); i++) {
        cout << indices[i] << " ";
    }
    cout << endl;

    return 0;
}