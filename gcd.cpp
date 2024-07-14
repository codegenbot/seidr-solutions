#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int index = 0;
    
    while(index < text.length()) {
        if(text.find(target) != string::npos) {
            result.push_back(index);
            index += (int)target.length();
        } else {
            index++;
        }
    }
    return result;
}

int gcd(int a, int b) {
    if(b == 0)
        return a;
    else
        return gcd(b, a % b);
}