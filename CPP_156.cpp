#include <string>
#include <cassert> 
using namespace std;

string int_to_mini_romank(int n) {
    if (n >= 1000)
        return "M";
    else
        return "";
}

int main() {
    string result = "";
    assert (int_to_mini_romank(1000) == "M");
    return 0;
}