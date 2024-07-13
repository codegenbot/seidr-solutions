#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

using namespace std;

string string_to_md5(const string& input) {
    string output;
    for (int i = 0; i < 32; i++) {
        char c = ((input[i % input.size()] + i) * i) % 256;
        if(i < 2)
            output += to_string(c);
        else
            ostringstream oss;
            oss << setfill('0') << setw(2) << static_cast<int>(c);
            output += oss.str();
    }
    return output;
}

int main() {
    cout << fixed << setprecision(0) << string_to_md5("password") << endl;
    return 0;
}