#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    for (int i = 0; i <= text.length() - target.length(); ++i) {
        bool found = true;
        for (int j = 0; j < target.length(); ++j) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            indices.push_back(i);
        }
    }
    return indices;
}

int main() {
    int numCases;
    cin >> numCases;
    
    for(int i = 0; i < numCases; ++i){
        string text;
        cin >> text;
        string target;
        cin >> target;
        
        vector<int> indices = findIndices(text, target);
        cout << indices.size() << endl;
        for (int index : indices) {
            cout << index << " ";
        }
        cout << endl;
    }
    
    return 0;
}