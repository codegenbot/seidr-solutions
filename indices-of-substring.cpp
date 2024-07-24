#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int start = 0;
    
    while (start < text.length()) {
        size_t pos = text.find(target, start);
        
        if (pos != string::npos) {
            indices.push_back(pos);
            start = pos + 1;
        } else {
            break;
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