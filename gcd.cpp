```cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <limits>

using namespace std;

int gcd(int a, int b) {
    a = abs(a);
    b = abs(b);
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a; 
}

vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> result; // Initialize the vector
    size_t pos = 0;
    while ((pos = text.find(target, pos)) != string::npos) {
        result.push_back(pos);
        pos += target.size();
    }
    return result;
}

int main() {
    int a = 0, b = 0;

    while (true) {
        if (!(cin >> a) || !(cin >> b)) {
            cout << "Invalid input. Please enter two integers: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            break;
        }
    }

    if (b == 0) {
        cout << "GCD of the numbers is: " << a << endl;
    } else {
        int result = gcd(a, b);
        cout << "GCD of the numbers is: " << result << endl;
    }

    string text, target;

    while (true) {
        if (!(getline(cin, text)) || !(getline(cin, target))) {
            cout << "Invalid input. Please enter two strings: ";
        } else {
            break;
        }
    }

    if (target.empty()) {
        cout << "Error: Target string is empty." << endl;
    } else {
        auto indices = indicesOfSubstring(text, target);
        for (int i : indices) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}