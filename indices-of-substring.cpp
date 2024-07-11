#include <vector>
#include <string>
#include <iostream>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int pos = 0; // position in text

    while (true) { 
        pos = text.find(target, pos);
        
        if (pos == string::npos) {
            if (target.length() == 1) { // special case for single character target
                break;
            }
            continue; // start searching again from the beginning of text
        }

        result.push_back(pos);
        pos += target.size(); // move to the next occurrence
    }
    
    return result;
}

int main() {
    string text = "3/G,";
    string target = "CDE";
    vector<int> result = indicesOfSubstring(text, target);
    for (int i : result) {
        cout << i << endl;
    }
}