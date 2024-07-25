#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int index = 0;
    
    while (index < text.length()) {
        size_t pos = text.find(target, index);
        
        if (pos != string::npos) {
            indices.push_back(pos);
            index = pos + 1; // Move forward to find the next occurrence
        } else {
            break; // If target is not found in the rest of the text
        }
    }
    
    return indices;
}

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> res = findIndices(s, s.substr(0, n));
    for (int i : res) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}