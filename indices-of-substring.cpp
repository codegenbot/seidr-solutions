#include <vector>
#include <iostream>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    for(int i = 0; i <= text.size() - target.size(); i++) {
        bool found = true;
        int j = 0;
        while(i+j < text.size()) {
            if(text[i+j] != target[j]) {
                found = false;
                break;
            }
            j++;
            if(j == target.size()-1) {
                result.push_back(i);
                i += j+1; // Start the search from where the previous match ended.
                j = 0;
            }
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