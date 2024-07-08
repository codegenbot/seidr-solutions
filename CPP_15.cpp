```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    string str = string_sequence(n);
    cout << str << endl;
    return 0;
}

string string_sequence(int n) {
    ostringstream oss;
    for (int i = 0; i <= n; ++i) {
        oss << i << " ";
    }
    return oss.str();
}