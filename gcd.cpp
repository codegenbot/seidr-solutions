#include <iostream>
#include <vector>
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
    int a = 48;
    int b = 18;
    cout << "GCD: " << gcd(a, b) << endl;

    string text = "Hello World!";
    string target = "o";
    vector<int> indices;

    int index = 0;
    while ((index = text.find(target)) != string::npos) {
        indices.push_back(index);
        text.erase(index, target.length());
    }

    for (int i : indices) {
        cout << "Target appears at index: " << i << endl;
    }
    return 0;
}