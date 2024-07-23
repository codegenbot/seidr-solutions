#include <iostream>
#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int prevLast = -1;
    while (prevLast != string::npos) {
        indices.push_back(prevLast);
        prevLast += target.size();
    }
    return indices;
}

int main() {
    string text;
    cin >> text;

    string target;
    cin.ignore();  // Ignore the newline character left in input stream
    getline(cin, target);

    vector<int> indices = findIndices(text, target);
    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}