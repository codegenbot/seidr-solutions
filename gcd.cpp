#include <vector>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length(), m = target.length();
    
    for(int i=0; i<=n-m;i++){
        if(text.substr(i,m).compare(target)==0){
            result.push_back(i);
        }
    }
    return result;