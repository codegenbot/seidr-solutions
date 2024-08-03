#include <vector>
using namespace std;

vector<int> indicesOfSubstr(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for (int i = 0; i <= n - m; i++) {
        if (text.substr(i, m).compare(target) == 0) {
            result.push_back(i);
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
    int num1, num2;
    cin >> num1 >> num2;
    
    cout << gcd(num1, num2) << endl;

    string text, target;
    cin >> text >> target;
    
    vector<int> result = indicesOfSubstr(text, target);
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}