#include <string>
#include <sstream>

string string_to_md5(string text) {
    if (text.empty()) return "";

    MD5_CTX ctx;
    unsigned char md[16];
    unsigned char* p = NULL;

    MD5_Init(&ctx);
    std::stringstream ss(text);

    while (ss >> std::noskipws) {
        int c;
        while ((c = ss.get()) != EOF && !std::isspace(c)) {
            MD5_Update(&ctx, &c, 1);
        }
    }

    MD5_Final(md, &ctx);

    stringstream result;
    for (int i = 0; i < 16; ++i) {
        char buffer[3];
        sprintf(buffer, "%02x", md[i]);
        result << buffer;
    }

    return result.str();
}