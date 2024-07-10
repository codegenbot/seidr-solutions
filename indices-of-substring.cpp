#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int pos = 0;
    
    while ((pos = text.find(target, pos)) != string::npos) {
        indices.push_back(pos);
        pos += target.length();
    }
    
    return indices;
}

int main() {
    string text;
    cin >> text;
    string target;
    cin >> target;
    
    vector<int> result = findIndices(text, target);
    for (auto i : result) {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}