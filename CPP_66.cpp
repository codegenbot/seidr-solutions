#include <iostream>
#include <string>

using namespace std;

int digitSum(string s) {
    int sum = 0;
    for (char c : s) {
        if (isupper(c)) {
            sum += (c - 'A' + 1); 
        }
    }
    return sum;
}

int main() {
    cout << digitSum("You arE Very Smart");
    return 0;
}