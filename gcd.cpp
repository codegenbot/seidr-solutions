Here's the modified code:

```cpp
#include <vector>
#include <string>

using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> result;
    int start = 0;
    while (start < text.length()) {
        int pos = text.find(target, start);
        if (pos == -1)
            break;
        result.push_back(pos);
        start = pos + 1;
    }
    return result;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}