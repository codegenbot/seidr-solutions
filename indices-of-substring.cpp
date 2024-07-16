#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int start = 0;
    
    while (start < text.size()) {
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