```cpp
#include <vector>
#include <string>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int length = target.length();
    
    for(int i=0; i<=text.length()-length; i++) {
        if(text.substr(i, length) == target) {
            result.push_back(i);
            while(i+length <= text.length() && text.substr(i, length) == target) {
                i++;
                result.push_back(i);
            }
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