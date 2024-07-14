```cpp
#include <vector>
#include <iostream>
#include <string>

using namespace std;

vector<int> computeLPSArray(const string& pat) {
    int m;
    vector<int> lps; 
    m = 0; 

    lps.push_back(0); 

    for (int i = 1; i < pat.length(); i++) {
        while (m > 0 && pat[i] != pat[m-1]) { 
            m = m - 1; 
        }

        if (pat[i] == pat[m-1]) { 
            m++;
        } else {
            lps.push_back(static_cast<size_t>(m)); 
        }
    }
    return lps;
}

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result; // Initialize with 0 size
    int n = text.length();
    int m = target.length();

    using std::size_type;
    vector<int> lps = computeLPSArray(target);

    for (int i = 0; i <= n - m; i++) {
        int j = 0;
        while (j < m && text[i + j] == target[j]) {
            j++;
        }

        if (j == m) {
            result.push_back(i);
        } else {
            int k = lps[j-1];
            i = i + j - k; // move the start index of new substring
        }
    }

    return result;
}

int main() {
    string text;
    cin >> text;
    string target;
    cin >> target;

    vector<int> indices = indicesOfSubstring(text, target);

    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;
}