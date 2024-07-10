#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> computeLPSArray(string target) {
    int m = target.length();
    vector<int> lps(m, 0);

    if (m == 0) { 
        return vector<int>();
    }

    int length = 0;

    for (int i = 1; i < m; i++) {
        while (length > 0 && target[i] != target[length]) {
            length = lps[length - 1];
        }

        if (target[i] == target[length]) {
            length++;
        }

        lps[i] = length;
    }

    return lps;
}

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    vector<int> lps = computeLPSArray(target);

    for (int i = 0; i <= n - m; i++) {
        if (text.substr(i, m) == target) {
            result.push_back(i);
            i += m - 1; // Skip the matched portion
        } else {
            int j = min(i + lps[m - 1], n - 1); // Adjust the upper limit of the inner loop
            while (j >= i && text[j - m + 1] != target[0]) { 
                j -= 1; 
            }
            if (j - m + 1 >= i) {
                int p = lps[m - 1]; // Update p to reflect the new starting position
                while (p > 0 && text[j - m + 1 + p] != target[p]) { 
                    p -= 1; 
                }
                if (p > 0) {
                    i = j; // Adjust the index for the next iteration
                } else {
                    break;
                }
            } else {
                break;
            }
        }
    }

    return result;
}

int main() {
    string text = "Hello World";
    string target = "World";
    vector<int> result = indicesOfSubstring(text, target);
    for (int i : result) {
        cout << i << endl;
    }
    return 0;
}