#include <vector>
#include <string>
#include <iostream>

using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int index = 0;
    
    while ((index = text.find(target)) != string::npos) {
        indices.push_back(index);
        if (index + 1 < text.size()) {
            text = text.substr(index + 1);
        } else {
            break;
        }
    }
    
    return indices;
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;

    string text, target;
    cin >> text >> target;
    vector<int> result = findIndices(text, target);
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}