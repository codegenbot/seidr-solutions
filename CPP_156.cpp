#include <string>
using namespace std;

string int_to_mini_romank(int n) {
    if (n == 1) {
        return "i";
    } else if (n >= 1000) {
        return "m";
    } else if (n >= 200) {
        string s = to_string(n / 200);
        char c = (n % 200 > 0)? 'k' : ' ';
        return s + "c" + c;
    } else if (n >= 20) {
        return to_string(n / 10) + "x";
    } else {
        return "i";
    }
}

int main() {
    string result = int_to_mini_romank(1000);
    cout << result << endl;
    return 0;
}