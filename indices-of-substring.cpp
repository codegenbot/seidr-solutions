Here is the solution:

#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    size_t pos = 0;
    while ((pos = text.find(target)) != string::npos) {
        indices.push_back(pos);
        pos += target.size();
    }
    return indices;
}

int main() {
    int n;
    cin >> n;
    string text;
    for (int i = 0; i < n; ++i) {
        cin.ignore(); // Ignore newline character
        getline(cin, text);
        string target;
        getline(cin, target);
        vector<int> result = findIndices(text, target);
        for (int i : result) {
            cout << i << endl;
        }
    }
    return 0;
}