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

    int result;
    if (stoi(input[0]) > stoi(input[1])) 
        result = 1;
    else if (stoi(input[0]) == stoi(input[1]))
        result = 0;
    else
        result = -1;

    if (result > 0) cout << "First is greater" << endl;
    else if (result == 0) cout << "Both are equal" << endl;
    else cout << "Second is greater" << endl;

    return 0;
}