#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> result;
    int start = 0;
    
    while (start < text.size()) {
        int pos = text.find(target, start);
        if (pos == string::npos) break;
        
        result.push_back(pos);
        start = pos + 1;
    }
    
    return result;
}

int main() {
    string text;
    cin >> text;
    string target;
    cin >> target;
    
    vector<int> indices = findIndices(text, target);
    
    for (int index : indices) {
        cout << index << " ";
    }
    cout << endl;

    return 0;
}