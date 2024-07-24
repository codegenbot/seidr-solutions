#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int index = 0;
    
    while (index < text.size()) {
        index = text.find(target, index);
        
        if (index == string::npos) break; // no more targets to find
        
        indices.push_back(index);
        index += target.size();
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
        cout << i << endl;
    }
    return 0;
}