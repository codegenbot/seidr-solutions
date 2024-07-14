#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int start = 0;
    
    while (true) {
        int pos = text.find(target, start);
        if (pos == string::npos)
            break;
        
        indices.push_back(pos);
        start = pos + 1;
    }
    
    return indices;
}

int main() {
    int n;
    cin >> n;
    string text;
    getline(cin, text);
    string target;
    getline(cin, target);
    vector<int> result = findIndices(text, target);
    for (int i : result) {
        cout << i << endl;
    }
    return 0;
}