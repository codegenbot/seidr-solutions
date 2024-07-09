Here is the completed code:

```cpp
#include <string>
#include <vector>

using namespace std;

bool simplify(string x, string n) {
    int a = 0, b = 1, c = 0, d = 1;
    
    // convert strings to integers
    vector<string> tokensX = split(x, '/');
    vector<string> tokensN = split(n, '/');

    a = stoi(tokensX[0]);
    b = stoi(tokensX[1]);
    c = stoi(tokensN[0]);
    d = stoi(tokensN[1]);

    // find greatest common divisor
    int gcd = abs(a*d - b*c);
    
    for(int i = 2; i <= gcd; i++) {
        if(gcd % i == 0) {
            if((a/i)*(d/i) == (c/i)*(b/i)) {
                return false;
            }
        }
    }

    // simplify the fractions
    int numerator = a / gcd;
    int denominator = b / gcd;

    // check if the simplified fraction is equal to x * n
    if(((long long)numerator)*denominator == ((long long)c)*b) {
        return true;
    } else {
        return false;
    }
}

vector<string> split(string str, char ch) {
    vector<string> tokens;
    string token;
    
    for (int i = 0; i < str.length(); i++) {
        if(str[i] == ch) {
            tokens.push_back(token);
            token = "";
        } else {
            token += str[i];
        }
    }
    tokens.push_back(token);
    
    return tokens;
}