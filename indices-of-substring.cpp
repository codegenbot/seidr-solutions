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

        i += (i + m > n ? m : lps[i]);

    }

    return result;
}

vector<int> computeLPSArray(string target) {
    int M = target.length();
    vector<int> lps(M);
    int length = 0;

    lps[0] = 0; // no pattern for empty string

    int i = 1;
    while (i < M) {
        if (target[i] == target[length]) {
            length++;
            lps[i] = length;
            i++;
        } else {
            if (length != 0) {
                length = lps[length - 1];
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