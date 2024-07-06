#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

int compare(string a, string b) {
    int ai = stoi(a);
    int bi = stoi(b);

    if (ai > bi) return 1;
    else if (ai == bi) return 0;
    else return -1;
}

int main() {
    cout << "Enter two numbers separated by space: ";
    string input[2];
    for(int i = 0; i < 2; i++) {
        cin >> input[i];
    }

    int result = compare(input[0], input[1]);

    if (result > 0) cout << "First is greater" << endl;
    else if (result == 0) cout << "Both are equal" << endl;
    else cout << "Second is greater" << endl;

    return 0;
}