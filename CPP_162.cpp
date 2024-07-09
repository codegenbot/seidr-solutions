#include <openssl/md5.h>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "";
    }

    unsigned char md5[16];
    md5_context ctx;
    MD5_CTX_init(&ctx);
    const char* cstr = text.c_str();
    MD5_CTX_update(&ctx, (unsigned char*)cstr, text.size());
    MD5_CTX_finish(&ctx, md5);

    ostringstream oss;
    for (int i = 0; i < 16; ++i) {
        oss << setfill('0') << setw(2) << hex << (int)md5[i];
    }

    return oss.str();
}