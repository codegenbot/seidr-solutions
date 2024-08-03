#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int last_occurrence = -1;
    while (true) {
        size_t pos = text.find(target, last_occurrence + 1);
        if (pos == string::npos) break;
        last_occurrence = pos;
        result.push_back(pos);
    }
    return result;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}