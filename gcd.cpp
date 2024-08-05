#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int targetLen = target.length();
    for(int i=0; i<=text.length()-targetLen; i++){
        if(text.substr(i,targetLen).compare(target)==0){
            result.push_back(i);
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
    return a;
}