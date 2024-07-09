#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> res;
    int n = text.length();
    int m = target.length();

    for(int i=0; i+n-m<=n; i++){
        if(text.substr(i,m).compare(target)==0){
            res.push_back(i);
            while(i+n-m<=n && text.substr(i,m).compare(target)==0) {
                i++;
                res.push_back(i);
            }
        }
    }

    return res;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}