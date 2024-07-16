#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int start = 0, end = 0;
    
    while (end < text.size()) {
        end = text.find(target, start);
        
        if (end == string::npos) break;
        
        indices.push_back(end);
        start = end + 1;
    }
    
    return indices;
}

int main() {
    int n; cin >> n;
    string text, target;
    cin >> text >> target;

    vector<int> result = findIndices(text, target);

    for (int i : result) cout << i << " ";
    return 0;
}