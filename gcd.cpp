#include <vector>
#include <string>
using namespace std;

int main() {
    int a = 12; 
    int b = 15;
    cout << "GCD: " << gcd(a, b) << endl;

    string text = "abcdef";  
    string target = "def";
    vector<int> result = indicesOfSubstring(text, target);
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
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

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}