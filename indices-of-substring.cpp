#include <iostream>
#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int lastFound = -1; 

    for (int i = 0; i <= text.size() - target.size(); i++) { 
        if (text.substr(i, target.size()) == target) { 
            indices.push_back(i); 
            lastFound = i;
        }
    } 
    
    return indices;
}

int main() {
    int n;
    cin >> n;
    string text;
    getline(cin, text);
    for (int i = 0; i < n; i++) {
        string target;
        getline(cin, target);
        vector<int> result = findIndices(text, target);
        for (int num : result) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}