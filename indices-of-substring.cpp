#include <iostream>
#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int prevLast = -1;
    while ((prevLast = text.find(target, prevLast + 1)) != string::npos) {
        indices.push_back(prevLast);
        prevLast += target.size();
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