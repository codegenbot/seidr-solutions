```cpp
#include <vector>
#include <string>

using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int targetLength = target.length();
    for (int i = 0; i <= text.length() - targetLength; i++) {
        bool found = true;
        for (int j = 0; j < targetLength; j++) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            indices.push_back(i);
            // Check for overlapping targets
            int k = i + targetLength;
            while (k <= text.length()) {
                found = true;
                for (int j = 0; j < targetLength; j++) {
                    if (text[k - targetLength + j] != target[j]) {
                        found = false;
                        break;
                    }
                }
                if (found) {
                    indices.push_back(k - targetLength);
                } else {
                    break;
                }
                k++;
            }
        }
    }
    return indices;
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}