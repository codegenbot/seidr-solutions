#include <vector>
#include <algorithm>
#include <iostream>
#include <limits>

using namespace std;

bool isSame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<int> getOddCollatz(int n) {
    vector<int> result;
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
        if (n % 2 != 0) { 
            result.push_back(n);
        }
    }
    return result;
}

vector<int> getCollatz(int n) {
    vector<int> result;
    while (n != 1) {
        result.push_back(n);
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
    }
    return result;
}

int main() {
    int input;
    cout << "Enter a number: ";
    cin >> input;
    if(input < 0) {
        cout << "Invalid input. Please enter a non-negative integer." << endl;
        return -1;
    }
    vector<int> output = getCollatz(input);
    for (int num : output) {
        cout << num << " ";
    }
    return 0;
}