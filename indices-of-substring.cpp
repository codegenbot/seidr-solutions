#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int start = 0;
    
    while(start <= text.size() - target.size()) {
        int index = text.find(target, start);
        
        if(index == -1) break;
        
        result.push_back(index);
        start = index + 1;
    }
    
    return result;
}

int main() {
    string text;
    cin >> text;
    string target;
    cin >> target;
    
    vector<int> indices = indicesOfSubstring(text, target);
    
    for(int i : indices) {
        cout << i << " ";
    }
    
    return 0;
}