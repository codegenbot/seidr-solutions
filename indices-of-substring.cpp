#include <iostream>
#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    vector<int> lps = computeLPSArray(target);

    int i = 0; 
    while (i <= n - m + 1) { 
        if (text.substr(i, m) == target) {
            result.push_back(i);
        }

        if (i + m > n)
            break;

        if (target.substr(0, m) == text.substr(i, m)) {
            i = i + m;
        }
        else{
            int j = lps[m-1];
            if (j+1 < m && target[0] == text[i+j])
                i += j+1;
            else
                i += 1;            
        }
    }

    return result;
}

vector<int> computeLPSArray(string s) {
    int n = s.length();
    vector<int> lps(n);
    int length = 0;

    lps[0] = 0;

    for (int i = 1; i < n; ) {
        if (s[i-1] == s[length]) {
            length++;
            lps[i] = length;
            i++;
        }
        else {
            if (length != 0) {
                length = lps[length-1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }

    return lps;
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