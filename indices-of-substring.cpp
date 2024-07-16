#include <vector>
#include <iostream>
#include <sstream>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for (int i = 0; ; ) {
        if ((i = text.find(target, i)) == string::npos) break;
        result.push_back(i);
        i += m;
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