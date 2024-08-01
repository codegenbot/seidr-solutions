#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int start = 0;
    
    while(start <= text.size() - target.size()) {
        int end = start + target.size();
        
        if(text.substr(start, target.size()) == target) {
            indices.push_back(start);
            start += target.size();
        } else {
            start++;
        }
    }
    
    return indices;
}

int main() {
    string text;
    cin >> text;
    string target;
    cin >> target;
    
    vector<int> result = findIndices(text, target);
    
    for(int i : result) {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}