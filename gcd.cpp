
#include <iostream>
using namespace std;
int gcd(int a, int b);
void indicesOfSubstring(vector<int>& result, const string& text, const string& target);
void printVector(const vector<int>& v);
int main() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
    
    vector<int> result;
    indicesOfSubstring(result, "text", "target");
    printVector(result);
    return 0;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

void indicesOfSubstring(vector<int>& result, const string& text, const string& target) {
    for (int i = 0; i < text.length() - target.length(); i++) {
        int j = 0;
        while (text[i + j] == target[j])
            j++;
        if (j == target.length())
            result.push_back(i);
    }
}

void printVector(const vector<int>& v) {
    for (auto i : v) {
        cout << i << " ";
    }
    cout << endl;
}