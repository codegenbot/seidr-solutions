#include <string>
using namespace std;

string circular_shift(int x, int shift) {
    string str = to_string(x);
    int n = str.length();
    if (shift >= n)
        return str;
    else {
        string result = str.substr(shift % n) + str.substr(0, shift % n);
        return result;
    }
}

int main() {
    cout << circular_shift(11, 2) << endl;
}