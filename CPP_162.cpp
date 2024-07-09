#include <openssl/md5.h>
#include <string>
#include <iomanip>
#include <sstream>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "";
    }

    md5_CTX ctx;
    MD5_CTX_init(&ctx);
    const char* cstr = text.c_str();
    MD5_CTX_update(&ctx, cstr, text.size());
    MD5_CTX_finish(md5, &ctx);

    ostringstream oss;
    for (int i = 0; i < 16; ++i) {
        oss << setfill('0') << setw(2) << hex << (int)md[i];
    }

    return oss.str();
}