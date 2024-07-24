#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int prev = 0;
    while (true) {
        size_t found = text.find(target, prev);
        if (found == string::npos) break;
        indices.push_back(found);
        prev = found + 1;
    }
    return indices;
}

int main() {
    // Your code for reading input from user
    string text, target;
    cin >> text >> target;
    vector<int> result = findIndices(text, target);
    // Your code for printing output
    cout << '[';
    for (int i : result) {
        cout << i;
        if (i < result.back()) cout << ',';
    }
    cout << ']' << endl;

    return 0;
}