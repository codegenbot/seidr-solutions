#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();
    
    for(int i=0; i<=n-m; i++) {
        bool found = true;
        for(int j=0; j<m; j++) {
            if(text[i+j] != target[j]) {
                found = false;
                break;
            }
        }
        if(found) {
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