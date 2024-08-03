#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int prev = -1;
    size_t pos = 0;
    
    while ((pos = text.find(target, prev + 1)) != string::npos) {
        result.push_back(pos);
        prev = pos;
    }
    
    return result;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}