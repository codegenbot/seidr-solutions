Here is the solution:

```cpp
#include<string>
#include<openssl/md5.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char digest[MD5_DIGEST_LENGTH];
    MD5(text.c_str(), text.length(), digest);

    stringstream ss;
    for(int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        ss << setfill('0') << setw(2) << hex << (int)digest[i];
    }

    return ss.str();
}