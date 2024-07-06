#include <vector>
#include <iostream>
#include <string>
using namespace std;

int gcd(int a, int b) {
    if (a == 0) return b;
    return gcd(b % a, a);
}

vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> indices;
    size_t start = 0;
    while (start < text.size()) {
        size_t pos = text.find(target, start);
        if (pos != string::npos) {
            indices.push_back(pos);
            // Check for overlapping occurrences
            for (size_t i = 1; i < target.size(); ++i) {
                size_t nextPos = text.find(target, pos + i);
                if (nextPos != string::npos) {
                    indices.push_back(nextPos - i);
                }
            }
            start = pos + target.size();
        } else {
            break;
        }
    }
    return indices;
}

int main() {
    cout << "Enter a text string: ";
    string text;
    cin >> text;
    cout << "Enter a target string: ";
    string target;
    cin >> target;
    vector<int> indices = indicesOfSubstring(text, target);
    cout << "The indices of the target string in the text are: ";
    for (auto i : indices) {
        cout << i << " ";
    }
    return 0;
}