#include <vector>
#include <string>
#include <iostream>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.size();
    int m = target.size();

    for(int i = 0; i <= n - m; i++) {
        if(text.substr(i, m) == target) {
            result.push_back(i);
        }
    }

    return result;
}

int main() {
    string text = "Hello World";
    string target = "o";
    vector<int> result = indicesOfSubstring(text, target);
    for(int i: result) {
        cout << i << endl;
    }
    return 0;