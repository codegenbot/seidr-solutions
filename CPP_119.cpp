#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isMatch(const vector<string>& vec) {
    int open = 0, close = 0;
    for (const string& s : vec) {
        for (char c : s) {
            if (c == '(') open++;
            else close++;
        }
    }
    return open == close;
}

int main() {
    assert(isMatch({")", "("}) == true);
    return 0;
}