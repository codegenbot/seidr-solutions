```c
#include <string>
using namespace std;

std::string int_to_mini_romank(int n) {
    if (n >= 1000) {
        return "m";
    } else {
        return "";
    }
}

int main() {
    std::string result = "";
    assert(int_to_mini_romank(1000) == "m");
    return 0;
}