#include <iostream>
#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int prevLast = -1;
    while ((size_t last = text.find(target, prevLast + 1)) != string::npos) {
        indices.push_back(last);
    }
    return indices;
}

int main() {
    string text;
    cin >> text;

    string target;
    getline(cin, target);

    vector<int> indices = findIndices(text, target);
    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}