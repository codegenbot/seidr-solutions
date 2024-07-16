#include <vector>
#include <string>
#include <iostream>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int len = target.length();
    for(int i = 0; ; i++){
        if(i+len > text.length()) break;
        bool found = true;
        for(int j = 0; j < len; j++){
            if(text[i+j] != target[j]){
                found = false;
                break;
            }
        }
        if(found) result.push_back(i);
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

    std::string text, target;
    cin >> text >> target;
    vector<int> indices = indicesOfSubstring(text, target);
    for (auto i : indices)
        cout << i << " ";
    return 0;
}