#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int start = 0;
    
    while (start <= text.length() - target.length()) {
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
        vector<int> res = findIndices(text, text);
        for(auto x:res) cout << x << " ";
        cout << endl;
    }
    return 0;
}