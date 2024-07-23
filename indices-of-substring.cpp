#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int start = 0;
    
    while (start < text.length()) {
        int pos = text.find(target, start);
        
        if (pos == -1) break;
        
        indices.push_back(pos);
        start = pos + 1;
    }
    
    return indices;
}

int main() {
    string text, target;
    cin >> text >> target;
    vector<int> result = findIndices(text, target);
    for(int i: result)
        cout << i << endl;
    return 0;
}