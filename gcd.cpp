#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length(), m = target.length();
    for(int i=0; i<=n-m; i++){
        if(text.substr(i,m) == target)
            result.push_back(i);
    }
    return result;
}

int gcd(int a, int b){
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}