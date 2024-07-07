#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for(int i = 0; i <= n - m; i++){
        bool found = true;
        for(int j = 0; j < m; j++){
            if(text[i+j] != target[j]){
                found = false;
                break;
            }
        }
        if(found) result.push_back(i);
    }

    return result;
}

int main() {
    // Example usage
    string text, target;
    cout << "Enter the text: ";
    getline(cin, text);
    cout << "Enter the target substring: ";
    getline(cin, target);

    vector<int> indices = indicesOfSubstring(text, target);

    if(indices.empty()) {
        cout << "Target not found in text." << endl;
    } else {
        cout << "Indices of target: ";
        for(int i : indices) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}