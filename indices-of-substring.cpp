#include <iostream>
#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int lastFound = 0;
    
    while (true) {
        size_t foundPos = text.find(target, lastFound);
        
        if (foundPos == string::npos) break;
        
        indices.push_back(foundPos);
        lastFound = foundPos + 1;
    }
    
    return indices;
}

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> result = findIndices(s, s.substr(0, n));
    for (int i : result) 
        cout << i << " ";
    cout << endl;
    return 0;
}