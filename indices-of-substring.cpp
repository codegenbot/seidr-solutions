#include <vector>
#include <string>
#include <initializer_list>
#include <iostream>

using namespace std;

int main() {
    string text = "ABCDEF";
    string target = "CDE";
    vector<int> result = indicesOfSubstring(text, target);
    for (int i : result) {
        cout << i << "\n";
    }
}

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int j = 0;
    for (int i = 0; i <= text.size() - target.size(); ++i) {
        if (text.substr(i, target.size()).compare(target) == 0) {
            result.push_back(i);
        }
    }
    return result;
}