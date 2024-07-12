#include <algorithm>
#include <string>
using namespace std;

string filp_case(string s) {
    string result;
    for (char c : s) {
        if (isalpha(c)) {
            char temp = (c >= 'a' && c <= 'z') ? c - ('a' - 'A') : c;
            result += temp;
        } else
            result += c;
    }
    return result;
}

int main() {
    assert(filp_case("These violent delights have violent ends") == "tHeSe ViOleNt dElIgHts HaVe ViOleNt EnDs");
    // Your code here
}