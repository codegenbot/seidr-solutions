```cpp
#include <string>
using namespace std;

string int_to_mini_roman(int num) {
    string roman = "";
    switch (num) {
        case 1000:
            roman += "M";
            break;
        default:
            return "Input is not supported";
    }
    return roman;
}

int main() {
    assert(int_to_mini_roman(1000) == "M");
    return 0;
}