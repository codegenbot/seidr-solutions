#include <iostream>
#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for(int i = 0; i + m <= n; ++i) { 
        bool found = true;
        for(int j = 0; j < m; ++j) {
            if(text[i+j] != target[j]) {
                found = false;
                break;
            }
        }
        if(found) {
            result.push_back(i);
            if (i + m == n)
                break;
            else
                i += m - 1;
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