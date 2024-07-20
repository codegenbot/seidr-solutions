#include <vector>
#include <iostream>
#include <string>

using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int start = 0;
    while (start < text.size()) {
        size_t found = text.find(target, start);
        if (found == string::npos) break;
        indices.push_back(found);
        start = found + 1;
    }
    return indices;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    int a, b;
    if (!(cin >> a >> b)) {
        cout << "Program did not receive expected input" << endl;
        return 1; 
    }
    cout << gcd(a, b) << endl;

    string text, target;
    if (!(cin >> text >> target)) { 
        cout << "Program did not receive expected input" << endl;
        return 1;
    }
    vector<int> result = findIndices(text, target);
    for (int i : result)
        cout << i << " ";
    return 0;
}