```cpp
#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

int main() {
    cout << "Enter two numbers separated by space: ";
    string input[2];
    for(int i = 0; i < 2; i++) {
        cin >> input[i];
    }

    int ai = stoi(input[0]);
    int bi = stoi(input[1]);

    if (ai > bi) cout << "First is greater" << endl;
    else if (ai == bi) cout << "Both are equal" << endl;
    else cout << "Second is greater" << endl;

    return 0;
}