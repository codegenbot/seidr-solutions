#include <iostream>
#include <vector>
#include <string>
#include <cmath>

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

int gcd(int a, int b) {
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    
    return a;
}

int main() {
    int choice;
    cin >> choice;
    if (choice == 1) {
        int a, b;
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