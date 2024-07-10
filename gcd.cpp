#include <vector>
#include <string>
#include <iostream>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int targetLen = target.length();
    for(int i=0; i<=text.length()-targetLen; i++){
        bool found = true;
        for(int j=0; j<targetLen; j++){
            if(text[i+j] != target[j]){
                found = false;
                break;
            }
        }
        if(found){
            result.push_back(i);
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
    cout << gcd(a, b) << endl;

    string text, target;
    cin >> text >> target;
    vector<int> indices = indicesOfSubstring(text, target);
    for(int i: indices){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}