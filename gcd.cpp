Here is the modified code:

```cpp
#include <vector>

int gcd(int a, int b) {
    if (b == 0) return a;
    else return gcd(b, a % b);
}

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    for (int i = 0; i <= text.length() - target.length(); i++) {
        int j = 0;
        while (j < target.length()) {
            if (text[i + j] != target[j]) break;
            j++;
        }
        if (j == target.length()) indices.push_back(i);
    }
    return indices;
}