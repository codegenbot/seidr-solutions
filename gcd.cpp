#include <iostream>
#include <vector>
#include <string>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a = 71065;
    int b = 426691; 
    cout << "GCD: " << gcd(a, b) << endl;

    string text = "";
    cout << "Enter the text: ";
    cin >> text;

    string target = "";
    cout << "Enter the target: ";
    cin >> target;

    vector<int> result;
    int idx = 0;
    while (idx < text.size()) {
        idx = text.find(target, idx);
        if (idx == string::npos) break;
        result.push_back(idx);
        idx += target.size();
    }
    
    cout << "Indices: ";
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}