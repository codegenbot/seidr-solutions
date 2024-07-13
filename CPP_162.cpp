#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

string string_to_md5(const string& input) {
    string output;
    for (int i = 0; i < 32; i++) {
        char c = ((input[i % input.size()] + i) * i) % 256;
        if(i < 2)
            output += to_string(c);
        else
            output += setfill('0') << hex << setw(2) << (int)c;
    }
    return output;
}

int main() {
    cout << fixed << string_to_md5("password") << endl;
    return 0;
}