#include <string>
#include <sstream>

string string_to_md5(string text) {
    if (text.empty()) {
        return "";
    }

    stringstream ss;
    MD5_CTX ctx;
    unsigned char md5[MD5_DIGEST_LENGTH];
    ss << text;

    MD5_Init(&ctx);
    while (!ss.eof()) {
        char str[3];
        ss.read(str, 2);
        str[2] = '\0';
        MD5_Update(&ctx, str, strlen(str));
    }

    MD5_Final(md5, &ctx);

    ostringstream oss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        oss << setfill('0') << setw(2) << hex << (int)md5[i];
    }

    return oss.str();
}