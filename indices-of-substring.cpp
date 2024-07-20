#include <iostream> 
#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int start = 0;
    while (start < text.size()) {
        size_t found = text.find(target, start);
        if (found == string::npos) break;
        indices.push_back(found);
        start = found + 1;
    }
    return indices;
}

int main() {
    int n;
    cin >> n;
    string text;
    getline(cin, text);
    vector<int> result = findIndices(text, text.substr(0, n));
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}