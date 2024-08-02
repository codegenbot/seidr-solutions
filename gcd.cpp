#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int len = target.length();
    for(int i=0; i<=text.length()-len; i++) {
        if(text.substr(i, len) == target) {
            result.push_back(i);
            while((i+len)<text.length() && text.substr(i, 1) == target[0]) {
                i++;
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

int main() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a,b) << endl;

    string text, target;
    cin >> text >> target;
    vector<int> res = indicesOfSubstring(text, target);
    for(int i : res)
        cout << i << " ";
    cout << endl;
    return 0;
}