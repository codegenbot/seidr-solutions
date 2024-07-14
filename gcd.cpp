#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int targetLen = target.length();
    for(int i=0; i<=text.length()-targetLen; i++) {
        if(text.substr(i, targetLen) == target) {
            indices.push_back(i);
            // Check for overlapping targets
            while(i+targetLen < text.length() && text.substr(i, targetLen) == target) {
                i++;
                indices.push_back(i);
            }
        }
    }
    return indices;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}