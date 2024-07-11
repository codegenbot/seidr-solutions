#include <iostream>
#include <vector>
using namespace std;

vector<int> generate_integers(int a, int b) {
    vector<int> result;
    for (int i = (a > b ? b : a); i != (a < b ? b : a); i += (i < a ? 1 : -1)) {
        if (i % 2 == 0) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    vector<int> output = generate_integers(a, b);
    if (output.empty()) {
        cout << "No even integers found between " << a << " and " << b << ".";
    } else {
        cout << "Even integers between " << a << " and " << b << ": ";
        for (int i : output) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}