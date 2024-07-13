#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

string string_to_md5(const string& input) {
    string output;
    for (int i = 0; i < 32; i++) {
        char c = ((input[i % input.size()] + i) * i) % 256;
        if(i < 2)
            cout << setw(2) << setfill('0') << static_cast<int>(c);
        else
            cout << std::setw(2) << std::setfill('0') << hex << setprecision(0) << static_cast<int>(c);
    }
}

int main() {
    cout << fixed << setprecision(0) << string_to_md5("password") << endl;
    return 0;
}