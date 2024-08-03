#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length(), m = target.length();
    for(int i = 0; ; i++) {
        if(i + m > n) break;
        int j = 0;
        while(j < m && text[i+j] == target[j]) j++;
        if(j == m) result.push_back(i);
        else i += j;
    }
    return result;
}

int gcd(int a, int b) {
    if(b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    int a, b; 
    cin >> a >> b;
    cout << gcd(a, b) << endl;

    string text, target;
    cin >> text >> target;
    vector<int> indices = indicesOfSubstring(text, target);
    for(int index : indices) {
        cout << index << " ";
    }
    cout << endl;
    return 0;
}