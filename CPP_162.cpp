#include <string>
#include <sstream>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    MD5_CTX md5;
    unsigned char result[16];
    unsigned char input[1024];

    stringstream ss(text);
    string buffer;
    int i = 0;

    while (getline(ss, buffer, '\0')) {
        memcpy(input + i * 1024, buffer.c_str(), buffer.size());
        i++;
    }

    input[i * 1024 - 1] = '\0';

    MD5Init(&md5);
    MD5Update(&md5, input, i * 1024);
    MD5Final(result, &md5);

    ostringstream oss;
    for (int j = 0; j < 16; j++) {
        oss << hex << setfill('0') << setw(2) << static_cast<int>(result[j]);
    }

    return oss.str();
}