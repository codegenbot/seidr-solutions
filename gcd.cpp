```cpp
#include <vector>
#include <string>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int index = 0;
    while (index <= text.length() - target.length()) {
        if (text.substr(index, target.length()).compare(target) == 0) {
            result.push_back(index);
            index += target.length();
        } else {
            index++;
        }
    }
    return result;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}