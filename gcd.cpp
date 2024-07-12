#include <vector>
#include <iostream>
#include <string>

using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int targetLength = target.length();
    for(int i = 0; i <= text.length() - targetLength; i++) {
        bool match = true;
        for(int j = 0; j < targetLength; j++) {
            if(text[i+j] != target[j]) {
                match = false;
                break;
            }
        }
        if(match) {
            indices.push_back(i);
        }
    }
    return indices;
}

int gcd(int a, int b) {
    if(b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a,b) << endl;

    string text, target;
    cin >> text >> target;
    vector<int> result = findIndices(text, target);
    for(int i : result) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}