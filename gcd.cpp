#include <vector>
#include <string>
#include <iostream>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

vector<int> findIndicesOfSubstring(const string& text, const string& target) {
    vector<int> indices;
    int textLen = text.length();
    int targetLen = target.length();
    
    for (int i = 0; i <= textLen - targetLen; ++i) {
        bool found = true;
        for (int j = 0; j < targetLen; ++j) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            indices.push_back(i);
        }
    }
    
    return indices;
}

int main() {
    // Test the gcd function
    int a = 24, b = 36;
    int result = gcd(a, b);
    cout << "GCD of " << a << " and " << b << " is: " << result << endl;
    
    // Test the findIndicesOfSubstring function
    string text = "abracadabra";
    string target = "abra";
    vector<int> indices = findIndicesOfSubstring(text, target);
    
    cout << "Indices where '" << target << "' appears in '" << text << "': ";
    for (int index : indices) {
        cout << index << " ";
    }
    cout << endl;

    return 0;
}