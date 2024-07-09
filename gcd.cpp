#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> findIndicesOfSubstring(const string& text, const string& target) {
    vector<int> indices;
    size_t pos = text.find(target, 0);
    
    while (pos != string::npos) {
        indices.push_back(pos);
        pos = text.find(target, pos + 1);
    }
    
    return indices;
}

long long gcd(long long a, long long b) {
    if (b == 0) {
        return abs(a);
    }
    return gcd(b, a % b);
}

int main() {
    long long choice;
    cin >> choice;
    if (choice == 1) {
        long long a, b;
        cin >> a >> b;
        cout << gcd(a, b) << endl;
    } else if (choice == 2) {
        string text, target;
        cin >> text >> target;
        vector<int> result = findIndicesOfSubstring(text, target);
        for (int index : result) {
            cout << index << " ";
        }
        cout << endl;
    }

    return 0;
}