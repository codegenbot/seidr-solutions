#include <string>
using namespace std;

string int_to_mini_romank(int n) {
    if (n >= 1000)
        return "m";
    else
        return "";
}

int main() {
    string result = "";
    assert (int_to_mini_romank(1000) == "m");
    return 0;
}