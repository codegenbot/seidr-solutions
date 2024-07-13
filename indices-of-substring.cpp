#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string text, target;
    getline(cin, text);
    text = text.substr(0, text.size() - 1); // Remove newline character
    getline(cin, target);
    
    for (int i = 0; i <= text.size() - target.size(); ++i) {
        if (text.substr(i, target.size()) == target) {
            cout << i << " ";
        }
    }
    
    return 0;
}