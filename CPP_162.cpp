#include <iostream>
#include <string>
#include <openssl/md5.h>

using namespace std;

string string_to_md5(const string& input) {
    unsigned char result[16];
    MD5((const unsigned char*)input.c_str(), input.size(), result);
    string output;
    for(int i=0; i<16; i++){
        sprintf(&output[0], "%02x", (int)(result[i]));
    }
    return output;
}

int main() {
    cout << fixed << setprecision(0) << string_to_md5("password") << endl;
    return 0;
}