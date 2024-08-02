```cpp
#include <iostream>
#include <sstream>
using namespace std;

string string_sequence(int n) {
    ostringstream oss;
    for (int i = 0; i <= n; ++i) {
        oss << i << " ";
    }
    return oss.str();
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << string_sequence(n) << endl;
    return 0;
}