#include <vector>
#include <iostream>
#include <string>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    for (int i = 0; i <= text.size() - target.size(); i++) {
        int j = 0; while (j < target.size() && text[i + j] == target[j]) j++;
        if (j == target.size()) {
            result.push_back(i);
            i += j; // move on to the next potential match
        }
    }
    return result;
}

int main() {
    string text, target;
    cin >> text >> target;

    vector<int> indices = indicesOfSubstring(text, target);
    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}