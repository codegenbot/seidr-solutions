#include <iostream>
#include <vector>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int start = 0;
    
    while (start < text.size()) {
        size_t pos = text.find(target, start);
        if (pos == string::npos) break;
        
        result.push_back(pos);
        start = pos + 1;
    }
    
    return result;
}

int main() {
    string text, target;

    cin >> text >> target;

    vector<int> indices = indicesOfSubstring(text, target);

    for (int i : indices)
        cout << i << " ";
    
    cout << endl;

    return 0;
}