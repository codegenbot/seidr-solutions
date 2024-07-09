#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int pos = -1; // initialize position to -1

    while ((pos = text.find(target)) != string::npos) {
        indices.push_back(pos);
        text.erase(0, pos + target.length()); // erase the found substring
    }

    return indices;
}

int main() {
    string text;
    cin >> text;
    int n;
    cin >> n;
    vector<int> indices = findIndices(text, to_string(n));
    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}