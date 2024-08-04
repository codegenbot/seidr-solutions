#include <iostream>
#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;

    string text, target;
    cin.ignore();
    cin >> text >> target;

    vector<int> indices;
    size_t pos = text.find(target, 0);
    while(pos != string::npos) {
        indices.push_back(pos);
        pos = text.find(target, pos + 1);
    }

    for(int idx : indices) {
        cout << idx << " ";
    }

    return 0;
}