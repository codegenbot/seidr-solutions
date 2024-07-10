#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int index = 0;
    
    while ((index = text.find(target)) != string::npos) {
        indices.push_back(index);
        text.erase(0, index + target.length());
    }
    
    return indices;
}

int main() {
    int n;
    cin >> n;
    string text;
    cin >> text;
    vector<int> res = findIndices(text, text.substr(0, n));
    cout << "[";
    for (int i = 0; i < res.size(); i++) {
        cout << res[i];
        if (i < res.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]\n";
    return 0;
}