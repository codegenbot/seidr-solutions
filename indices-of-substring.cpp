#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int start = 0;
    
    while (start < text.size()) {
        int end = text.find(target, start);
        
        if (end == -1) break; // Target not found
        
        result.push_back(end); // Add the index to the result
        start = end + 1; // Update the starting position for next search
    }
    
    return result;
}

int main() {
    int n;
    cin >> n;
    string text;
    cin >> text;
    vector<int> res = indicesOfSubstring(text, text.substr(0, n));
    for (int i: res) {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}