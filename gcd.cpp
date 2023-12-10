#include <vector>
#include <iostream>
#include <string>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

vector<int> indices_of_substring(string text, string target) {
    vector<int> indices;
    for (int i = 0; i < text.size(); i++) {
        if (text[i] == target[0]) {
            int j = 1;
            while (j < target.size() && text[i + j] == target[j]) {
                j++;
            }
            if (j == target.size()) {
                indices.push_back(i);
            }
        }
    }
    return indices;
}

int main() {
    int a, b;
    while (cin >> a >> b) {
        cout << gcd(a, b) << endl;
        string text, target;
        cin >> text >> target;
        vector<int> indices = indices_of_substring(text, target);
        for (int i = 0; i < indices.size(); i++) {
            cout << indices[i] << " ";
        }
        cout << endl;
    }
    return 0;
}