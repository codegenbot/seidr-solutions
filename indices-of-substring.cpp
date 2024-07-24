#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int j = 0; // index of current character in target
    for (int i = 0; i <= text.length() - target.length(); i++) { // iterate over the text
        if (text[i + j] == target[j]) { // check if characters match
            j++;
            if (j == target.length()) {
                indices.push_back(i); // found a match, add index to result
                j = 0; // reset index for next match
            }
        } else {
            j = 0; // mismatch, reset index for next character in target
        }
    }
    return indices;
}