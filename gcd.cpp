#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Your existing functions
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

int main() {
    string text = "your_text_string";
    string target = "your_target_string";

    vector<int> indices = indicesOfSubstring(text, target);
    for (int i : indices) {
        cout << i << endl;
    }

    int a = 12; 
    int b = 15;  
    int g = gcd(a, b);
    cout << "GCD: " << g << endl;

    return 0;
}