#include <vector>
#include <string>
#include <iostream>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int pos = 0; 

    while (true) { 
        pos = text.find(target, pos);
        
        if (pos == string::npos) {
            break;
        }

        result.push_back(pos);
        pos = pos + 1; // move to the next character
    }
    
    return result;
}

int main() {
    string text = "ABCDEF";
    string target = "CDE";
    vector<int> result = indicesOfSubstring(text, target);
    for (int i : result) {
        cout << i << endl;
    }
}