#include <vector>
#include <string> 
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.size();
    int m = target.size();

    for(int i=0; i<=n-m; i++) {
        if(text.substr(i,m).compare(target) == 0) {
            result.push_back(i);
        }
    }

    return result;
}

int gcd(int a, int b) {
    if(b == 0)
        return a;
    else
        return gcd(b, a%b);
}