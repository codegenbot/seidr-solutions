#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int start = 0;
    while (start < text.length()) {
        size_t found = text.find(target, start);
        if (found != string::npos) {
            indices.push_back(found);
            start = found + 1;
        } else {
            break;
        }
    }
    return indices;
}

int main() {
    int t;
    cin >> t;
    for(int i=0; i<t; i++) {
        string text;
        cin >> text;
        vector<int> indices = findIndices(text, text);
        for(int j=0; j<indices.size(); j++) {
            cout << indices[j] << " ";
        }
        cout << endl;
    }
    return 0;
}