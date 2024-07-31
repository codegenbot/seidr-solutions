Here is the solution:

```cpp
#include<string>
#include<openssl/ssl.h>
#include<openssl/mem.h>

using namespace std;

string string_to_md5(string text){
    MD5_CTX md5;
    unsigned char result[16];
    string outText = "";

    // Check if the input string is empty.
    if(text.empty()) {
        return "";
    }

    // Create a new context
    MD5_Init(&md5);

    // Convert the text to UTF-8 and hash it
    const char* utf8_text = text.c_str();
    MD5_Update(&md5, utf8_text, text.size());

    // Get the result
    MD5_Final(result, &md5);

    // Create a string representation of the hash.
    for(int i=0; i<16; ++i) {
        char c = (char)(result[i] >> 4);
        outText += (c < 10) ? c + '0' : (c - 10) + 'a';
        c = (char)(result[i]);
        outText += (c < 10) ? c + '0' : (c - 10) + 'a';
    }

    return outText;
}