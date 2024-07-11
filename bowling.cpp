#include <iostream>
using namespace std;

int score(string s) {
    int total = 0;
    for (int i = 0; i < s.size(); i++) {
        if (total >= 100) {
            break;
        }
        // Existing scoring logic
    }
    return total;
}

int main() {
    string s;
    cin >> s;
    cout << score(s) << endl;
    return 0;
}