#include <string>
using namespace std;

string circular_shift(int x, int shift) {
    string str = to_string(x);
    int n = str.size();
    shift %= n;
    if (shift == 0) {
        return str;
    }
    if (shift > n) {
        reverse(str.begin(), str.end());
        return str;
    }
    string result = str.substr(n - shift) + str.substr(0, n - shift);
    return result;
}

int main() {
    int x, shift;
    cout << "Enter a number: ";
    cin >> x;
    cout << "Enter a shift amount: ";
    cin >> shift;
    
    string shifted_number = circular_shift(x, shift);
    cout << "Shifted number: " << shifted_number << endl;
    
    return 0;
}