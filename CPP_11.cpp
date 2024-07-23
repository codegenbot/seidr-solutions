#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;

string string_xor(string a, string b) {
    istringstream is_a(a), is_b(b);
    string result = "";
    char c;
    while (is_a >> c && is_b >> c) {
        if ((c - '0') ^ ('0' - '0')) {
            result += "1";
        } else {
            result += "0";
        }
    }
    return result;
}

int main() {
    string a = "0101";
    string b = "0000";
    a.erase(std::remove(a.begin(), a.end(), ' '), a.end() - std::distance(a.begin(), a.end()));
    b.erase(std::remove(b.begin(), b.end(), ' '), b.end() - std::distance(b.begin(), b.end()));
    cout << string_xor(a, b) << endl;
    return 0;
}