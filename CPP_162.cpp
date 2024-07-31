Here is the solution:

```cpp
#include<string>
#include<openssl/md5.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md5[MD5_DIGEST_LENGTH];
    MD5(text.c_str(), text.length(), md5);

    stringstream ss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        ss << hex << setfill('0') << fixed << setw(2) << (int)md5[i];
    }

    return ss.str();
}