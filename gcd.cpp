#include <vector>
#include <string>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length(), m = target.length();
    for(int i = 0; i <= n - m; i++) {
        if(text.substr(i,m) == target) { // commas added
            for(int j = 0; j < m; j++) { // additional loop to find overlapping indices
                int k = i+j;
                while(k + m <= n && text.substr(k,m) == target) {
                    result.push_back(k);
                    k += m;
                }
            }
        }
    }
    return result;
}

int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a; // match with { }
}