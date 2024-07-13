```cpp
#include <iostream>
#include <string>

using namespace std;

string string_to_md5(const string& input) {
    string output;
    for (int i = 0; i < 32; i++) {
        char c = ((input[i % input.size()] + i) * i) % 256;
        if(i < 2)
            output += to_string(c);
        else
            output.push_back(((c >= '0' && c <= '9') || (c >= 'A' && c <= 'F')) ? char(c + ('a' - 'f')) : char(c));
    }
    return output;
}

cout << fixed << setprecision(0) << string_to_md5("password") << endl;
return 0;