#include <iostream>
#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for(int i = 0; i <= n - m; ++i) { 
        bool found = true;
        for(int j = 0; j < m; ++j) {
            if(std::tolower(text[i+j]) != std::tolower(target[j])) { 
                int k = i + j; // Convert 'text' index to 'target' index
                if(k >= 1 && text[k-1] == '[' && target[j] == ']') { // Special case for [%]
                    found = true;
                } else {
                    found = false;
                    break;
                }
            }
        }
        if(found) {
            result.push_back(i);
        }
    }

    return result;
}

int main() {
    string text;
    getline(cin, text);
    string target;
    getline(cin, target);

    vector<int> indices = indicesOfSubstring(text, target);

    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}