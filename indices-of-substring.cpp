#include <iostream>
#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> result;
    int start = 0;
    
    while (start < text.length()) {
        size_t found = text.find(target, start);
        
        if (found != string::npos) {
            result.push_back(found);
            start = found + 1;
        } else {
            break;
        }
    }
    
    return result;
}

int main() {
    int n;
    cin >> n;
    string text;
    cin >> text;
    vector<int> indices = findIndices(text, text.substr(0, n));
    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;
    return 0;