#include <iostream>
#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for(int i = 0; i <= n - m; i++){
        if(text.substr(i,m) == target){
            result.push_back(i);
            while(i + m < n && text.substr(i,m) == target){
                i++;
                result.push_back(i);
            }
        }
    }

    return result;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "GCD of " << a << " and " << b << " is: " << gcd(a, b) << endl;

    string text, target;
    cout << "Enter text: ";
    getline(cin, text);
    cout << "Enter target string: ";
    getline(cin, target);

    vector<int> indices = indicesOfSubstring(text, target);
    if(indices.empty()) {
        cout << "Target not found in the text." << endl;
    } else {
        cout << "Indices of substring are: ";
        for(int i : indices) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}