#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for(int i=0; i<=n-m; i++) {
        if(text.substr(i,m).compare(target) == 0) {
            result.push_back(i);
            // Check for overlapping occurrences
            while(i+m <= n && text.substr(i,m).compare(target) == 0) {
                i++;
                result.push_back(i);
            }
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
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;

    string text, target;
    cin >> text >> target;
    vector<int> indices = indicesOfSubstring(text, target);
    for (int i : indices)
        cout << i << " ";
    cout << endl;

    return 0;
}