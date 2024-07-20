#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    for (int i = 0; i <= text.size() - target.size(); ++i) {
        bool match = true;
        for (int j = 0; j < target.size(); ++j) {
            if (text[i + j] != target[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            result.push_back(i);
            // Check for overlapping occurrences
            while (i + target.size() <= text.size()) {
                bool overlapMatch = true;
                for (int k = 0; k < target.size(); ++k) {
                    if (text[i + k] != target[k]) {
                        overlapMatch = false;
                        break;
                    }
                }
                if (!overlapMatch) {
                    break;
                }
                i++;
                result.push_back(i);
            }
        }
    }
    return result;
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;