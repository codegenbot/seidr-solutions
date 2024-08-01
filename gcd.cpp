#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    int n = text.size();
    int m = target.size();
    
    for (int i = 0; i <= n - m; ++i) {
        bool found = true;
        for (int j = 0; j < m; ++j) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            indices.push_back(i);
        }
    }
    
    return indices;
}

int main() {
    string input;
    getline(cin, input);
    istringstream iss(input);
    
    int a, b;
    if (!(iss >> a >> b)) {
        cerr << "Invalid input for gcd. Exiting..." << endl;
        return 1;
    }
    
    cout << gcd(a, b) << endl;

    string text, target;
    if (!(iss >> text >> target)) {
        cerr << "Invalid input for indicesOfSubstring. Exiting..." << endl;
        return 1;
    }
    
    vector<int> result = indicesOfSubstring(text, target);
    for (int idx : result) {
        cout << idx << " ";
    }
    
    return 0;
}