#include <vector>
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

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

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    string text; 
    cout << "Enter your text: ";
    getline(cin >> ws, text);

    string target;
    cout << "Enter your target: ";
    getline(cin >> ws, target);

    vector<int> indices = indicesOfSubstring(text, target);
    
    int a; 
    cout << "Enter the first number: ";
    cin >> a;

    int b; 
    cout << "Enter the second number: ";
    cin >> b;
    
    cout << "Indices of Substring are ";
    for(int i : indices) {
        cout << i << " ";
    }
    cout << std::endl;
    
    cout << "GCD of " << a << " and " << b << " is " << gcd(a,b) << std::endl;

    return 0;
}