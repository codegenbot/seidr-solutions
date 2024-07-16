```cpp
#include <vector>
#include <string>

using namespace std;

vector<int> indicesOfSubstring(std::string text, std::string target) {
    vector<int> result;
    for (int i = 0; i <= text.length() - target.length(); i++) {
        int j = 0;
        while (j < target.length()) {
            if (text[i + j] != target[j]) {
                break;
            }
            j++;
        }
        if (j == target.length()) {
            result.push_back(i);
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
}