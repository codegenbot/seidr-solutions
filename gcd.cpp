#include <vector>
#include <string>
#include <initializer_list>
using namespace std;

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
    int n = text.length();
    int m = target.length();

    for (int i = 0; i <= n - m; i++) {
        if (text.substr(i, m) == target) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    string text, target;
    cin >> text >> target;
    vector<int> results = indicesOfSubstring(text, target);
    for(int res : results) {
        cout << res << endl;
    }
    return 0;
}