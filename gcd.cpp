```cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int target_len = target.length();
    for(int i = 0; i <= text.length() - target_len; i++) {
        bool found = true;
        for(int j = 0; j < target_len; j++) {
            if(text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if(found) {
            indices.push_back(i);
        }
    }
    return indices;
}

int gcd(int a, int b) {
    if(b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    int a, b;
    cout << "Enter two integers: ";
    while (!(cin >> a >> b)) {
        cout << "Invalid input. Please enter two integers: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> a >> b;
    }
    if (a > INT_MAX / b) {
        cout << "Error: The result of the GCD operation exceeds the maximum allowed integer size." << endl;
        return 1; // or exit()
    }

    string text, target;
    cout << "Enter text and target: ";
    while (!(cin >> text >> target)) {
        cout << "Invalid input. Please enter two strings: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> text >> target;
    }
    
    vector<int> indices = findIndices(text, target);
    for(int i : indices)
        cout << i << " ";

    return 0;
}