#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int len = text.length();
    int tgt_len = target.length();

    for(int i = 0; i <= len - tgt_len; i++) {
        if(text.substr(i,tgt_len) == target)
            result.push_back(i);
    }
    return result;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}