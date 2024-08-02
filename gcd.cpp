#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> res;
    int n = text.length();
    int m = target.length();
    for(int i = 0; i <= n-m; ++i){
        if(text.substr(i,m) == target){
            res.push_back(i);
        }
    }
    return res;
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}