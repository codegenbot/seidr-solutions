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
    cout << string_sequence(10);
    return 0;
}