#include <vector>
#include <iostream>
#include <sstream>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for (int i = 0; ; i += m) {
        if (i + m > n) break;
        if (text.substr(i, m) == target) {
            result.push_back(i);
        }
    }

    return result;
}

int main() {
    string text;
    cin >> text;
    string target;
    cin >> target;

    vector<int> indices = indicesOfSubstring(text, target);

    for (int i : indices) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}