#include <vector>
#include <iostream>
#include <sstream>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    int pos = 0;
    if (text.find(target) != string::npos) {
        result.push_back(0);
        pos += 1;
    }
    while ((pos = text.find(target, pos)) != string::npos) {
        result.push_back(pos);
        // Continue searching from the end of the previous match
        pos += 1;
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