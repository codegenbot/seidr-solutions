#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int textLen = text.length();
    int targetLen = target.length();
    
    for(int i=0; i<=textLen-targetLen; i++) {
        if(text.substr(i, targetLen) == target) {
            result.push_back(i);
            // consider overlapping
            while(i+targetLen <= textLen && text.substr(i, targetLen) == target)
                i++;
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

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    cout << gcd(n1, n2) << endl;

    string text, target;
    cin >> text >> target;
    vector<int> indices = indicesOfSubstring(text, target);
    for(int i : indices)
        cout << i << " ";
    return 0;
}