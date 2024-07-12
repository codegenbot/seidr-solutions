#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

string string_to_md5(const string& input) {
    string output;
    for (int i = 0; i < 32; i++) {
        char c = ((input[i % input.size()] + i) * i) % 256;
        output += setfill('0') << setw(2) << hex << c;
    }
    return output;
}

int main() {
    cout << string_to_md5("password") << endl;
    return 0;
}