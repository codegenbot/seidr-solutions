#include <string>
#include <sstream>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    MD5_CTX ctx;
    unsigned char result[16];
    unsigned char buffer[1024];

    MD5_Init(&ctx);
    stringstream ss(text);

    int i = 0;
    while (ss >> noskipws >> getline(ss, string(buffer), '\0')) {
        MD5_Update(&ctx, buffer, strlen(buffer));
        i++;
    }

    MD5_Final(result, &ctx);

    ostringstream oss;

    for (int j = 0; j < 16; ++j) {
        oss << setfill('0') << setw(2) << hex << (int)result[j];
    }

    return oss.str();
}