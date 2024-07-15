#include <iostream>
#include <vector>
#include <string>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> result;
    for (int i = 0; i <= text.size() - target.size(); ++i) {
        bool found = true;
        for (int j = 0; j < target.size(); ++j) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    int a = 71065;
    int b = 426691; 
    cout << "GCD: " << gcd(a, b) << endl;

    string text = "your_text_here";
    string target = "your_target_here";

    vector<int> indices = indicesOfSubstring(text, target);
    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}