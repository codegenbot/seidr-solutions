#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    for (int i = 0; i <= text.size() - target.size(); i++) {
        bool match = true;
        for (int j = 0; j < target.size(); j++) {
            if (text[i + j] != target[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            result.push_back(i);
            // Check if the target string overlaps with itself
            while (i + target.size() <= text.size()) {
                i++;
                bool continueMatching = true;
                for (int j = 0; j < target.size(); j++) {
                    if (text[i + j] != target[j]) {
                        continueMatching = false;
                        break;
                    }
                }
                if (continueMatching) {
                    result.push_back(i);
                } else {
                    break;
                }
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