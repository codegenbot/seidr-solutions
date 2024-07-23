#include <iostream>
#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int last = -1;
    while ((last = text.find(target, last + 1)) != string::npos) {
        indices.push_back(last);
        last += target.size();
    }
    return indices;
}

int main() {
    // Read input from user
    string text;
    cin >> text;

    string target;
    int t;
    cin >> t;
    getline(cin, target);

    // Call the function and print the result
    vector<int> indices = findIndices(text, target);
    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}