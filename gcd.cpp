#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int len = target.length();
    for(int i=0; i<=text.length()-len; i++){
        if(text.substr(i,len)==target){
            result.push_back(i);
            while(i+len-1 < text.length() && text.substr(i,len) == target){
                i++;
                len++;
            }
            i--;
            len--;
        }
    }
    return result;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}