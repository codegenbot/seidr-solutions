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
            if(text[i+j] != target[j]) {
                found = false;
                break;
            }
        }
        if(found) {
            while(i+m-1 <= n-1 && text.substr(i, m).equals(target)) {
                result.push_back(i);
                i += m;
                found = false;
                for(int j = 0; j < m; ++j) {
                    if(text[i+j] != target[j]) {
                        break;
                    }
                }
                if(j == m-1) found = true;
            }
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