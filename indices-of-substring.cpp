#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string text, target;
    getline(cin, text);
    getline(cin, target);
    vector<int> indices;
    for (size_t i = 0; i <= text.length() - target.length(); ++i) {
        if (text.substr(i, target.length()) == target + " ") {
            bool isOverlap = false;
            if (i != 0 && text[i-1] == ' ') { // Check for overlap
                isOverlap = true;
            }
            if (i + target.length() < text.length() && text[i + target.length()] == ' ') { // Check for overlap
                isOverlap = true;
            }
            if (!isOverlap) {
                indices.push_back(i);
            }
        }
    }
    for (int index : indices) {
        cout << index << " ";
    }
    cout << endl;
    return 0;
}