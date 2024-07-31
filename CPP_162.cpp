#include <string>
#include <sstream>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    MD5_CTX ctx;
    unsigned char result[16];
    MD5_Init(&ctx);

    stringstream ss(text);
    char buffer[1024];

    while (ss.getline(buffer, 1024)) {
        MD5_Update(&ctx, buffer, strlen(buffer));
    }

    if (!text.empty()) {
        MD5_Update(&ctx, &buffer[strlen(buffer)], text.length());
    }

    MD5_Final(result, &ctx);

    ostringstream oss;
    for (int i = 0; i < 16; ++i) {
        oss << setfill('0') << setw(2) << hex << (int)result[i];
    }

    return oss.str();
}