```cpp
#include <iostream>
using namespace std;

int fizz_buzz(int n) {
    int count = 0;
    for (int i = 1; i < n; i++) {
        string s = to_string(i);
        if ((i % 11 == 0 || i % 13 == 0) && s.find('7') != string::npos)
            count++;
    }
    return count;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "The result is: " << fizz_buzz(num) << endl;
    return 0;
}