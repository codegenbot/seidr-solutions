#include <string>
using namespace std;

string int_to_mini_romank(int n) {
    if (n == 1) {
        return "i";
    } else if (n >= 1000) {
        return "m";
    } else if (n >= 200) {
        return to_string(n / 200) + "c" + string(1, 'k' - (n % 200 > 0));
    } else if (n >= 20) {
        return to_string(n / 10) + "x";
    } else {
        return "i";
    }
}

int main() {
    string result = "";
    //assert (int_to_mini_romank(1000) == "m");
    return 0;
}