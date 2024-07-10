```cpp
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<string> a) {
    if (a.size() != 1) {
        return false;
    }
    string str = a[0];
    for (int i = 1; i < a.size(); i++) {
        string temp;
        cin >> temp;
        transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
        if (temp != str) {
            return false;
        }
    }
    return true;
}

void solveProblem() {
    int num;
    cin >> num;
    for (int i = 0; i < num; i++) {
        vector<string> a(2);
        cin >> a[0] >> a[1];
        if (issame(a)) {
            cout << "The strings are the same." << endl;
        } else {
            cout << "The strings are not the same." << endl;
        }
    }
}

int main() {
    solveProblem();
    return 0;
}