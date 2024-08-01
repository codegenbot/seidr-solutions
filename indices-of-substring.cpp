#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int prevIndex = 0;
    
    while (true) {
        size_t foundPos = text.find(target, prevIndex);
        
        if (foundPos == string::npos)
            break;
        
        indices.push_back(foundPos);
        prevIndex = foundPos + 1;
    }
    
    return indices;
}

int main() {
    int n;
    cin >> n;
    cin.ignore();
    string text;
    getline(cin, text);
    
    vector<int> result = findIndices(text, n? to_string(n) : cin.getline(&text, (n+1) ? n + 1 : INT_MAX));
    for (int i: result)
        cout << i << " ";
    return 0;
}