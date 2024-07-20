#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string compare_one(string a, int b) {
    if (a > to_string(b)) {
        return a;
    }
    else if (a < to_string(b)) {
        return to_string(b);
    }
    else {
        return "None";
    }
}

int main() {
    string inputA;
    int inputB;

    cout << "Enter the first value: ";
    cin >> inputA;
    
    cout << "Enter the second value: ";
    cin >> inputB;

    string result = compare_one(inputA, inputB);

    cout << "The comparison result is: " << result << endl;

    return 0;
}