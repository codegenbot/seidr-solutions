#include <vector>
#include <string>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.size();
    int m = target.size();

    for(int i = 0; i <= n - m; i++) {
        if(text.substr(i, m) == target) {
            result.push_back(i);
        }
    }

    return result;
}
int main() {
    string text;
    string target;
    
    cout << "Enter the text: ";
    getline(cin, text);
    
    cout << "Enter the target substring: ";
    getline(cin, target);

    vector<int> indices = indicesOfSubstring(text, target);
    
    if(indices.size() > 0) {
        cout << "The target appears at the following indices: ";
        
        for(int i : indices) {
            cout << i << " ";
        }
        
        cout << endl;
    } else {
        cout << "Target not found." << endl;
    }

    return 0;
}