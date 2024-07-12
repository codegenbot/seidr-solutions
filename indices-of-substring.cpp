#include <vector>
#include <iostream>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    vector<int> lps(target.size());
    int length = 0;
    int i = 1;
    
    // Preprocess the pattern to build the LPS array
    while(i < target.size()) {
        if(target[i] == target[length]) {
            length++;
            lps[i] = length;
            i++;
        }
        else if(length != 0) {
            length = lps[length-1];
        }
        else {
            i++;
        }
    }
    
    for(int i = 0; i <= text.size() - target.size(); i++) {
        int j = 0;
        while(i+j < text.size() && i+j < target.size()) {
            if(text[i+j] != target[j]) {
                j = lps[j-1];
                i++;
                if(j == 0) break;
            }
            else
                j++;
        }
        
        // If the pattern is found, then update the result and shift the index to the next character in text
        if(j == target.size()) {
            result.push_back(i);
            i++;
            found = true;
        }
    }
    
    return result;
}

int main() {
    string text, target;
    cin >> text >> target;
    vector<int> res = indicesOfSubstring(text, target);
    for(int i: res) cout << i << " ";
    return 0;
}