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
    int n;
    cin >> n;
    string s;
    getline(cin, s);
    vector<int> result = findIndices(s, s.substr(0, n));
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}