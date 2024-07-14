#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    if(m == 0)
        return result; // or handle this situation as per your requirement.

    int *lps = new int[m];
    int j = 0; // index for target[]

    lps[0] = 0;
    int i, len = 0;

    for (i = 1; i < m; ) {
        if (target[i] == target[j]) {
            j++;
            lps[i] = j;
            i++;
        }
        else if (j != 0) {
            j = lps[j-1];
        }
        else {
            lps[i] = 0;
            i++;
        }
    }

    // Initialize the first element as 0
    lps[0] = 0;

    // Traverse the text and find all occurrences of target[].
    for (int i = 0; i <= n - m; ) {
        len = 0;
        j = 0;
        while (i + len < n && j < m) {
            if (text[i + len] == target[j]) {
                j++;
                len++;
            }
            else {
                i = i - (len - lps[j-1]);
                j = lps[j-1];
            }
        }

        while (j > 0) {
            result.push_back(i);
            j = lps[j-1];
        }
        i += len; // move to the next character
    }

    delete[] lps;

    return result;
}

int main() {
    string text, target;
    cout << "Enter the text: ";
    getline(cin, text);

    if(text.empty()) {
        cout << "Text cannot be empty." << endl;
        return 1; 
    }

    cout << "Enter the target substring: ";
    getline(cin, target);

    if(target.empty()) {
        cout << "Target cannot be empty." << endl;
        return 1; 
    }

    if (text.empty() || target.empty()) {
        cout << "Text or target cannot be empty." << endl;
        return 1; 
    }

    vector<int> result = indicesOfSubstring(text, target);
    
    if(result.size() == 0)
        cout << "Target not found in text.";
    else
        cout << "Indices of the target in the text are: ";
    for(int i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}